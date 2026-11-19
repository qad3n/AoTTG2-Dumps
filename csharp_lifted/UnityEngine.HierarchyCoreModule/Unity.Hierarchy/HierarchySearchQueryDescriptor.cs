// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchySearchQueryDescriptor
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6974CA0", Offset = "0x6973CA0", VA = "0x6974CA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x6974CB0", Offset = "0x6973CB0", VA = "0x6974CB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public HierarchySearchFilter[] Filters
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x6974CC0", Offset = "0x6973CC0", VA = "0x6974CC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x6974CD0", Offset = "0x6973CD0", VA = "0x6974CD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public string[] TextValues
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x6974CE0", Offset = "0x6973CE0", VA = "0x6974CE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x6974CF0", Offset = "0x6973CF0", VA = "0x6974CF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public bool Strict
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x6974D00", Offset = "0x6973D00", VA = "0x6974D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool Invalid
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x6974D10", Offset = "0x6973D10", VA = "0x6974D10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public string Query
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x6974D20", Offset = "0x6973D20", VA = "0x6974D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x6974F50", Offset = "0x6973F50", VA = "0x6974F50")]
	public HierarchySearchQueryDescriptor([Optional] HierarchySearchFilter[] filters, [Optional] string[] textValues)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x6975490", Offset = "0x6974490", VA = "0x6975490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x69754A0", Offset = "0x69744A0", VA = "0x69754A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.HierarchyModule" })]
	internal string BuildFilterQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x69754F0", Offset = "0x69744F0", VA = "0x69754F0")]
	internal string BuildSystemFilterQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x6975540", Offset = "0x6974540", VA = "0x6975540")]
	internal string BuildTextQuery()
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x6974DC0", Offset = "0x6973DC0", VA = "0x6974DC0")]
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
