using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000153")]
internal struct StartDragArgs
{
	[Token(Token = "0x170001AA")]
	public readonly string title
	{
		[Token(Token = "0x6000965")]
		[Address(RVA = "0x4CF62B0", Offset = "0x4CF62B0", VA = "0x4CF62B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	public readonly DragVisualMode visualMode
	{
		[Token(Token = "0x6000966")]
		[Address(RVA = "0x4CF62C0", Offset = "0x4CF62C0", VA = "0x4CF62C0")]
		[CompilerGenerated]
		get
		{
			return default(DragVisualMode);
		}
	}

	[Token(Token = "0x170001AC")]
	internal Hashtable genericData
	{
		[Token(Token = "0x6000967")]
		[Address(RVA = "0x4CF62D0", Offset = "0x4CF62D0", VA = "0x4CF62D0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x4CF62E0", Offset = "0x4CF62E0", VA = "0x4CF62E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	internal IEnumerable<Object> unityObjectReferences
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x4CF62F0", Offset = "0x4CF62F0", VA = "0x4CF62F0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x4CF6300", Offset = "0x4CF6300", VA = "0x4CF6300")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x4CF3DF0", Offset = "0x4CF3DF0", VA = "0x4CF3DF0")]
	public StartDragArgs(string title, DragVisualMode visualMode)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4CF6310", Offset = "0x4CF6310", VA = "0x4CF6310")]
	public void SetGenericData(string key, object data)
	{
	}
}
