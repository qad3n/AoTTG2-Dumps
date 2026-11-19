// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StartDragArgs
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C516B0", Offset = "0x6C506B0", VA = "0x6C516B0")]
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
		[Address(RVA = "0x6C516C0", Offset = "0x6C506C0", VA = "0x6C516C0")]
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
		[Address(RVA = "0x6C516D0", Offset = "0x6C506D0", VA = "0x6C516D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700022C")]
	internal Hashtable genericData
	{
		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x6C516E0", Offset = "0x6C506E0", VA = "0x6C516E0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x6C516F0", Offset = "0x6C506F0", VA = "0x6C516F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700022D")]
	internal IReadOnlyList<EntityId> entityIds
	{
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x6C51700", Offset = "0x6C50700", VA = "0x6C51700")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x6C51710", Offset = "0x6C50710", VA = "0x6C51710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700022E")]
	internal string[] assetPaths
	{
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x6C51720", Offset = "0x6C50720", VA = "0x6C51720")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x6C51730", Offset = "0x6C50730", VA = "0x6C51730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x6C4F0E0", Offset = "0x6C4E0E0", VA = "0x6C4F0E0")]
	public StartDragArgs(string title, DragVisualMode visualMode)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x6C51650", Offset = "0x6C50650", VA = "0x6C51650")]
	internal StartDragArgs(string title, DragVisualMode visualMode, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x6C51740", Offset = "0x6C50740", VA = "0x6C51740")]
	public void SetGenericData(string key, object data)
	{
	}
}
