   //tempory file to file
#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int
main (int argc, char** argv)
{
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
	double ps = cloud->pint.size()
	filec = fopen("holo.3df", "w");

	if (pcl::io::loadPCDFile<pcl::PointXYZ> ("holo.pcd", *cloud) == -1) //* load the file
	{
		PCL_ERROR ("Couldn't read file test_pcd.pcd \n");
		return (-1);
		}
	std::cout << "Loaded "
		<< cloud->width * cloud->height
		<< " data points from test_pcd.pcd with the following fields: "
        << std::endl;
	for (size_t i = 0; i < ps; ++i) {	
			fwrite(cloud.points[i].x, ps, filec);
			fwrite(cloud.points[i].y, ps, filec);
			fwrite(cloud.points[i].z, ps, filec);
			}
	return (0);
}