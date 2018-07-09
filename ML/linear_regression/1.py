import numpy as np
import pylab

def compute_error(b, m, data):
    totalError = 0
    #x = data[:,]


def optimizer(data, starting_b,starting_m,learning_rate,num_iter):
    pass




def compute_gradient(b_current, m_current,data,learning_rate):
    pass


def plot_data(data,b,m):
    pass

def Linear_regression():
    data = np.loadtxt('data.csv', delimiter=',')
    # define y=m*x + b
    learning_rate = 0.001
    initial_b = 0.0
    initial_m = 0.0
    num_iter = 1000    #迭代次数
    #train model
    compute_error(initial_b,initial_m,data)
    




    #pass


if __name__ == '__main__':
    Linear_regression()