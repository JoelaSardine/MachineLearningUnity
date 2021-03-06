#pragma once

#include <Eigen/Dense>
#include <vector>

namespace MachineLearning
{
    namespace Perceptron 
    {
        class SimplePerceptron
        {
        private:
            float a; // facteur d'apprentissage
            
            int n; // Nombre de data
            int din; // Nombre d'inputs par data

            Eigen::MatrixXf in; // Inputs
            Eigen::VectorXf t; // Output cible

            Eigen::VectorXf w; // Poids des param�tres
            Eigen::VectorXf wbest; // Poids des param�tres optimaux
            Eigen::VectorXf y; // Output calcul�

            int e; // Erreur
            int ebest; // Erreur minimale
            std::vector<int> mc; // Datas mal classees

            SimplePerceptron() {}

            float CalculateOutput(const int& index, bool useBest = false);
            void CalculateGlobalError();
            void ImproveWeights();

        public:
            SimplePerceptron(const float& a, const int& n, const int& din);
            ~SimplePerceptron() {}

            void FillData(float input[], float output[]);
            void FillData(Eigen::MatrixXf input, Eigen::MatrixXf output);

            void Init();

            int Run(int iterations);
            float CalculateOutput(float input[], bool useBest = false);

            Eigen::MatrixXf getWeights() { return wbest; }
            int getError() { return ebest; }
        };
        





        class BasePerceptron
        {
        private:
            float a; // facteur d'apprentissage

            int l; // Nombre de couches de neurones
            Eigen::VectorXi d; // Nombre de neurones par couche
            Eigen::VectorXi dadd; // d (additif)

            Eigen::MatrixXf w; // Poids des param�tres

            Eigen::MatrixXf in; // inputs
            Eigen::VectorXf t; // target output

            float GetGradient(const int& layer, const int& neuron, const bool& isLast = false) 
            {
                if (isLast)
                {

                }
                else
                {

                }
            }

        public:
        };
    }
}