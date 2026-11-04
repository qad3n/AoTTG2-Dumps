// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StartDragArgs
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000198")]
public struct StartDragArgs
{
	[Token(Token = "0x17000229")]
	public readonly string title
	{
		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public readonly DragVisualMode visualMode
	{
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		[CompilerGenerated]
		get
		{
			return default(DragVisualMode);
		}
	}

	[Token(Token = "0x1700022B")]
	internal EventModifiers modifiers
	{
		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700022C")]
	internal Hashtable genericData
	{
		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700022D")]
	internal IReadOnlyList<EntityId> entityIds
	{
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700022E")]
	internal string[] assetPaths
	{
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x3248AB0", Offset = "0x32470B0", VA = "0x183248AB0")]
	public StartDragArgs(string title, DragVisualMode visualMode)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x3248B10", Offset = "0x3247110", VA = "0x183248B10")]
	internal StartDragArgs(string title, DragVisualMode visualMode, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x3248A00", Offset = "0x3247000", VA = "0x183248A00")]
	public void SetGenericData(string key, object data)
	{
	}
}
