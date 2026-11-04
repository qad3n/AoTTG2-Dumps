// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchySearchQueryDescriptor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Scripting.LifecycleManagement;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Hierarchy;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000027")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchySearch.h")]
[UnityEngine.Bindings.NativeAsStruct]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class HierarchySearchQueryDescriptor
{
	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
	private static readonly HashSet<string> s_SystemFilters;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
	private static readonly HierarchySearchQueryDescriptor s_Empty;

	[Token(Token = "0x400006D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
	private static readonly HierarchySearchQueryDescriptor s_InvalidQuery;

	[Token(Token = "0x400006E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string m_Query;

	[Token(Token = "0x17000026")]
	public HierarchySearchFilter[] SystemFilters
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public HierarchySearchFilter[] Filters
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public string[] TextValues
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public bool Strict
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool Invalid
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x20FB170", Offset = "0x20F9770", VA = "0x1820FB170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public string Query
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x2F7FBA0", Offset = "0x2F7E1A0", VA = "0x182F7FBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2F7FE10", Offset = "0x2F7E410", VA = "0x182F7FE10")]
	public HierarchySearchQueryDescriptor([Optional] HierarchySearchFilter[] filters, [Optional] string[] textValues)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2F7FBA0", Offset = "0x2F7E1A0", VA = "0x182F7FBA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x2F7F630", Offset = "0x2F7DC30", VA = "0x182F7F630")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.HierarchyModule" })]
	internal string BuildFilterQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2F7F9A0", Offset = "0x2F7DFA0", VA = "0x182F7F9A0")]
	internal string BuildSystemFilterQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2F7F9F0", Offset = "0x2F7DFF0", VA = "0x182F7F9F0")]
	internal string BuildTextQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2F7F680", Offset = "0x2F7DC80", VA = "0x182F7F680")]
	internal string BuildQuery()
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	private static T[] Where<T>(IEnumerable<T> src, Func<T, bool> pred)
	{
		return null;
	}
}
