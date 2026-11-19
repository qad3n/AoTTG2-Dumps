// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200007C")]
public interface IGraph : IDisposable, IPrewarmable, IAotStubbable, ISerializationDepender, ISerializationCallbackReceiver
{
	[Token(Token = "0x170000E1")]
	Vector2 pan
	{
		[Token(Token = "0x60003CB")]
		get;
		[Token(Token = "0x60003CC")]
		set;
	}

	[Token(Token = "0x170000E2")]
	float zoom
	{
		[Token(Token = "0x60003CD")]
		get;
		[Token(Token = "0x60003CE")]
		set;
	}

	[Token(Token = "0x170000E3")]
	MergedGraphElementCollection elements
	{
		[Token(Token = "0x60003CF")]
		get;
	}

	[Token(Token = "0x170000E4")]
	string title
	{
		[Token(Token = "0x60003D0")]
		get;
	}

	[Token(Token = "0x170000E5")]
	string summary
	{
		[Token(Token = "0x60003D1")]
		get;
	}

	[Token(Token = "0x60003D2")]
	IGraphData CreateData();

	[Token(Token = "0x60003D3")]
	IGraphDebugData CreateDebugData();

	[Token(Token = "0x60003D4")]
	void Instantiate(GraphReference instance);

	[Token(Token = "0x60003D5")]
	void Uninstantiate(GraphReference instance);
}
