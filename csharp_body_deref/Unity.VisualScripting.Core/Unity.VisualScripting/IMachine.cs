using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CA")]
public interface IMachine : IGraphRoot, IGraphParent, IGraphNester, IAotStubbable
{
	[Token(Token = "0x170000FC")]
	IGraphData graphData
	{
		[Token(Token = "0x60004C4")]
		get;
		[Token(Token = "0x60004C5")]
		set;
	}

	[Token(Token = "0x170000FD")]
	GameObject threadSafeGameObject
	{
		[Token(Token = "0x60004C6")]
		get;
	}
}
