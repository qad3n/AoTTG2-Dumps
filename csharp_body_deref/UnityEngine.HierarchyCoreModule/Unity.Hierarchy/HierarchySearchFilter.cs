// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchySearchFilter
// Update status: NEW in this game update
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
		[Address(RVA = "0x2F7F590", Offset = "0x2F7DB90", VA = "0x182F7F590")]
		get
		{
			return ref *(HierarchySearchFilter*)null;
		}
	}

	[Token(Token = "0x17000021")]
	public bool IsValid
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x2F7F5E0", Offset = "0x2F7DBE0", VA = "0x182F7F5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	public readonly string Name
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
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
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
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
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
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
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(HierarchySearchFilterOperator);
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2F7F100", Offset = "0x2F7D700", VA = "0x182F7F100")]
	public static string ToString(HierarchySearchFilterOperator op)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2F7F2A0", Offset = "0x2F7D8A0", VA = "0x182F7F2A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2F7F050", Offset = "0x2F7D650", VA = "0x182F7F050")]
	internal static string QuoteStringIfNeeded(string s)
	{
		return null;
	}
}
