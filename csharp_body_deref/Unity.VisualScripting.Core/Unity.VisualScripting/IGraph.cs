using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200007C")]
public interface IGraph : IDisposable, IPrewarmable, IAotStubbable, ISerializationDepender, ISerializationCallbackReceiver
{
	[Token(Token = "0x170000DE")]
	Vector2 pan
	{
		[Token(Token = "0x60003C1")]
		get;
		[Token(Token = "0x60003C2")]
		set;
	}

	[Token(Token = "0x170000DF")]
	float zoom
	{
		[Token(Token = "0x60003C3")]
		get;
		[Token(Token = "0x60003C4")]
		set;
	}

	[Token(Token = "0x170000E0")]
	MergedGraphElementCollection elements
	{
		[Token(Token = "0x60003C5")]
		get;
	}

	[Token(Token = "0x170000E1")]
	string title
	{
		[Token(Token = "0x60003C6")]
		get;
	}

	[Token(Token = "0x170000E2")]
	string summary
	{
		[Token(Token = "0x60003C7")]
		get;
	}

	[Token(Token = "0x60003C8")]
	IGraphData CreateData();

	[Token(Token = "0x60003C9")]
	IGraphDebugData CreateDebugData();

	[Token(Token = "0x60003CA")]
	void Instantiate(GraphReference instance);

	[Token(Token = "0x60003CB")]
	void Uninstantiate(GraphReference instance);
}
