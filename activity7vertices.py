class graph:
    def __init__(self,gdict=None):
        if gdict is None:
            gdict = []
        self.gdict = gdict

    def getVertices(self):
        return list(self.gdict.keys())

graph_elements = {
     1 : [2,3,5,6],
     2 : [1,3,4,5,6],
     3 : [1,2,4,5],
     4 : [2,3],
     5 : [1,2,3],
     6 : [1,2]
}
g=graph(graph_elements)
print(g.getVertices())