// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RuntimeCodebase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200016C")]
public static class RuntimeCodebase
{
	[Token(Token = "0x200016E")]
	[CompilerGenerated]
	private sealed class _003CGetAssemblyAttributes_003Ed__15 : IEnumerable<Attribute>, IEnumerable, IEnumerator<Attribute>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400085B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400085C")]
		[FieldOffset(Offset = "0x18")]
		private Attribute _003C_003E2__current;

		[Token(Token = "0x400085D")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400085E")]
		[FieldOffset(Offset = "0x28")]
		private Type attributeType;

		[Token(Token = "0x400085F")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__attributeType;

		[Token(Token = "0x4000860")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerable<Assembly> assemblies;

		[Token(Token = "0x4000861")]
		[FieldOffset(Offset = "0x40")]
		public IEnumerable<Assembly> _003C_003E3__assemblies;

		[Token(Token = "0x4000862")]
		[FieldOffset(Offset = "0x48")]
		private IEnumerator<Assembly> _003C_003E7__wrap1;

		[Token(Token = "0x4000863")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<Attribute> _003C_003E7__wrap2;

		[Token(Token = "0x1700017D")]
		private Attribute System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EAttribute_003E_002ECurrent
		{
			[Token(Token = "0x6000EA0")]
			[Address(RVA = "0x4D4D0A0", Offset = "0x4D4D0A0", VA = "0x4D4D0A0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000EA2")]
			[Address(RVA = "0x4D4D0F0", Offset = "0x4D4D0F0", VA = "0x4D4D0F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x4D48370", Offset = "0x4D48370", VA = "0x4D48370")]
		[DebuggerHidden]
		public _003CGetAssemblyAttributes_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x4D4C5C0", Offset = "0x4D4C5C0", VA = "0x4D4C5C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E9D")]
		[Address(RVA = "0x4D4C830", Offset = "0x4D4C830", VA = "0x4D4C830", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E9E")]
		[Address(RVA = "0x4D4D000", Offset = "0x4D4D000", VA = "0x4D4D000")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0x4D4CF60", Offset = "0x4D4CF60", VA = "0x4D4CF60")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0x4D4D0B0", Offset = "0x4D4D0B0", VA = "0x4D4D0B0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000EA3")]
		[Address(RVA = "0x4D4D100", Offset = "0x4D4D100", VA = "0x4D4D100", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EA4")]
		[Address(RVA = "0x4D4D1B0", Offset = "0x4D4D1B0", VA = "0x4D4D1B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<Type> _types;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<Assembly> _assemblies;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> disallowedAssemblies;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<string, Type> typeSerializations;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x28")]
	private static Dictionary<string, Type> _renamedTypes;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x30")]
	private static Dictionary<string, string> _renamedNamespaces;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x38")]
	private static Dictionary<string, string> _renamedAssemblies;

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Dictionary<Type, Dictionary<string, string>> _renamedMembers;

	[Token(Token = "0x17000178")]
	public static IEnumerable<Type> types
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x4D477A0", Offset = "0x4D477A0", VA = "0x4D477A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public static IEnumerable<Assembly> assemblies
	{
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x4D47810", Offset = "0x4D47810", VA = "0x4D47810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	public static Dictionary<string, string> renamedNamespaces
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x4D49E00", Offset = "0x4D49E00", VA = "0x4D49E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public static Dictionary<string, string> renamedAssemblies
	{
		[Token(Token = "0x6000E92")]
		[Address(RVA = "0x4D4A160", Offset = "0x4D4A160", VA = "0x4D4A160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public static Dictionary<string, Type> renamedTypes
	{
		[Token(Token = "0x6000E93")]
		[Address(RVA = "0x4D49C30", Offset = "0x4D49C30", VA = "0x4D49C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x4D47880", Offset = "0x4D47880", VA = "0x4D47880")]
	static RuntimeCodebase()
	{
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x4D48230", Offset = "0x4D48230", VA = "0x4D48230")]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x4D482E0", Offset = "0x4D482E0", VA = "0x4D482E0")]
	[IteratorStateMachine(typeof(_003CGetAssemblyAttributes_003Ed__15))]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType, IEnumerable<Assembly> assemblies)
	{
		return null;
	}

	[Token(Token = "0x6000E86")]
	public static IEnumerable<TAttribute> GetAssemblyAttributes<TAttribute>(IEnumerable<Assembly> assemblies) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000E87")]
	public static IEnumerable<TAttribute> GetAssemblyAttributes<TAttribute>() where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x4D483A0", Offset = "0x4D483A0", VA = "0x4D483A0")]
	public static void PrewarmTypeDeserialization(Type type)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4D484E0", Offset = "0x4D484E0", VA = "0x4D484E0")]
	public static string SerializeType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4D48580", Offset = "0x4D48580", VA = "0x4D48580")]
	public static bool TryDeserializeType(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4D49460", Offset = "0x4D49460", VA = "0x4D49460")]
	public static Type DeserializeType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x4D49540", Offset = "0x4D49540", VA = "0x4D49540")]
	public static void ClearCachedTypes()
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x4D48810", Offset = "0x4D48810", VA = "0x4D48810")]
	private static bool TryCachedTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x4D488B0", Offset = "0x4D488B0", VA = "0x4D488B0")]
	private static bool TrySystemTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x4D495D0", Offset = "0x4D495D0", VA = "0x4D495D0")]
	private static bool TrySystemTypeLookup(TypeName typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x4D48D20", Offset = "0x4D48D20", VA = "0x4D48D20")]
	private static bool TryRenamedTypeLookup(string previousTypeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x4D4BD60", Offset = "0x4D4BD60", VA = "0x4D4BD60")]
	public static Dictionary<string, string> RenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x4D4BE40", Offset = "0x4D4BE40", VA = "0x4D4BE40")]
	private static Dictionary<string, string> FetchRenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x4D4A420", Offset = "0x4D4A420", VA = "0x4D4A420")]
	private static Dictionary<string, string> FetchRenamedNamespaces()
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x4D4AA30", Offset = "0x4D4AA30", VA = "0x4D4AA30")]
	private static Dictionary<string, string> FetchRenamedAssemblies()
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x4D4B040", Offset = "0x4D4B040", VA = "0x4D4B040")]
	private static Dictionary<string, Type> FetchRenamedTypes()
	{
		return null;
	}
}
