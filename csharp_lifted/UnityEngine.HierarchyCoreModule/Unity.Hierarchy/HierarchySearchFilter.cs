// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchySearchFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Scripting.LifecycleManagement;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Hierarchy;

[Serializable]
[Token(Token = "0x2000026")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchySearch.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct HierarchySearchFilter
{
	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_WhiteSpaces;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x8")]
	[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
	private static readonly HierarchySearchFilter s_Invalid;

	[Token(Token = "0x17000020")]
	public unsafe static ref readonly HierarchySearchFilter Invalid
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x6974850", Offset = "0x6973850", VA = "0x6974850")]
		get
		{
			return ref *(HierarchySearchFilter*)null;
		}
	}

	[Token(Token = "0x17000021")]
	public bool IsValid
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x69748C0", Offset = "0x69738C0", VA = "0x69748C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	public readonly string Name
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x6974910", Offset = "0x6973910", VA = "0x6974910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public readonly string Value
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x6974920", Offset = "0x6973920", VA = "0x6974920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public readonly float NumValue
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x6974930", Offset = "0x6973930", VA = "0x6974930")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000025")]
	public readonly HierarchySearchFilterOperator Op
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x6974940", Offset = "0x6973940", VA = "0x6974940")]
		[CompilerGenerated]
		get
		{
			return default(HierarchySearchFilterOperator);
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x6974950", Offset = "0x6973950", VA = "0x6974950")]
	public static string ToString(HierarchySearchFilterOperator op)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x6974A60", Offset = "0x6973A60", VA = "0x6974A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x6974B60", Offset = "0x6973B60", VA = "0x6974B60")]
	internal static string QuoteStringIfNeeded(string s)
	{
		return null;
	}
}
