using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000089")]
public interface IGraphParent
{
	[Token(Token = "0x170000F3")]
	IGraph childGraph
	{
		[Token(Token = "0x60003F2")]
		get;
	}

	[Token(Token = "0x170000F4")]
	bool isSerializationRoot
	{
		[Token(Token = "0x60003F3")]
		get;
	}

	[Token(Token = "0x170000F5")]
	Object serializedObject
	{
		[Token(Token = "0x60003F4")]
		get;
	}

	[Token(Token = "0x60003F5")]
	IGraph DefaultGraph();
}
