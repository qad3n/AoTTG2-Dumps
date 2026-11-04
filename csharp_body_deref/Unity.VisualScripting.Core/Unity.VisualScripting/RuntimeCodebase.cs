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
		[Token(Token = "0x4000859")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400085A")]
		[FieldOffset(Offset = "0x18")]
		private Attribute _003C_003E2__current;

		[Token(Token = "0x400085B")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400085C")]
		[FieldOffset(Offset = "0x28")]
		private Type attributeType;

		[Token(Token = "0x400085D")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__attributeType;

		[Token(Token = "0x400085E")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerable<Assembly> assemblies;

		[Token(Token = "0x400085F")]
		[FieldOffset(Offset = "0x40")]
		public IEnumerable<Assembly> _003C_003E3__assemblies;

		[Token(Token = "0x4000860")]
		[FieldOffset(Offset = "0x48")]
		private IEnumerator<Assembly> _003C_003E7__wrap1;

		[Token(Token = "0x4000861")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<Attribute> _003C_003E7__wrap2;

		[Token(Token = "0x17000180")]
		private Attribute System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EAttribute_003E_002ECurrent
		{
			[Token(Token = "0x6000EAA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000181")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000EAC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000EA5")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetAssemblyAttributes_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000EA6")]
		[Address(RVA = "0x2E4AD50", Offset = "0x2E49350", VA = "0x182E4AD50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000EA7")]
		[Address(RVA = "0x2E4A7F0", Offset = "0x2E48DF0", VA = "0x182E4A7F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x2E4AEA0", Offset = "0x2E494A0", VA = "0x182E4AEA0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x2E4AEF0", Offset = "0x2E494F0", VA = "0x182E4AEF0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x2E4AD10", Offset = "0x2E49310", VA = "0x182E4AD10", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x2E4AC60", Offset = "0x2E49260", VA = "0x182E4AC60", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x2E4AC60", Offset = "0x2E49260", VA = "0x182E4AC60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<Type> _types;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<Assembly> _assemblies;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> disallowedAssemblies;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<string, Type> typeSerializations;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x28")]
	private static Dictionary<string, Type> _renamedTypes;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x30")]
	private static Dictionary<string, string> _renamedNamespaces;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x38")]
	private static Dictionary<string, string> _renamedAssemblies;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Dictionary<Type, Dictionary<string, string>> _renamedMembers;

	[Token(Token = "0x1700017B")]
	public static IEnumerable<Type> types
	{
		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x2E39CD0", Offset = "0x2E382D0", VA = "0x182E39CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public static IEnumerable<Assembly> assemblies
	{
		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x2E39A10", Offset = "0x2E38010", VA = "0x182E39A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	public static Dictionary<string, string> renamedNamespaces
	{
		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x2E39B30", Offset = "0x2E38130", VA = "0x182E39B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	public static Dictionary<string, string> renamedAssemblies
	{
		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x2E39A60", Offset = "0x2E38060", VA = "0x182E39A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	public static Dictionary<string, Type> renamedTypes
	{
		[Token(Token = "0x6000E9D")]
		[Address(RVA = "0x2E39C00", Offset = "0x2E38200", VA = "0x182E39C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x2E393E0", Offset = "0x2E379E0", VA = "0x182E393E0")]
	static RuntimeCodebase()
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x2E37DE0", Offset = "0x2E363E0", VA = "0x182E37DE0")]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x2E37D50", Offset = "0x2E36350", VA = "0x182E37D50")]
	[IteratorStateMachine(typeof(_003CGetAssemblyAttributes_003Ed__15))]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType, IEnumerable<Assembly> assemblies)
	{
		return null;
	}

	[Token(Token = "0x6000E90")]
	public static IEnumerable<TAttribute> GetAssemblyAttributes<TAttribute>(IEnumerable<Assembly> assemblies) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	public static IEnumerable<TAttribute> GetAssemblyAttributes<TAttribute>() where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x2E37EE0", Offset = "0x2E364E0", VA = "0x182E37EE0")]
	public static void PrewarmTypeDeserialization(Type type)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x2E381A0", Offset = "0x2E367A0", VA = "0x182E381A0")]
	public static string SerializeType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x2E382E0", Offset = "0x2E368E0", VA = "0x182E382E0")]
	public static bool TryDeserializeType(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x2E36AC0", Offset = "0x2E350C0", VA = "0x182E36AC0")]
	public static Type DeserializeType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x2E36A40", Offset = "0x2E35040", VA = "0x182E36A40")]
	public static void ClearCachedTypes()
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x2E38250", Offset = "0x2E36850", VA = "0x182E38250")]
	private static bool TryCachedTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x2E38C20", Offset = "0x2E37220", VA = "0x182E38C20")]
	private static bool TrySystemTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x2E39000", Offset = "0x2E37600", VA = "0x182E39000")]
	private static bool TrySystemTypeLookup(TypeName typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x2E38560", Offset = "0x2E36B60", VA = "0x182E38560")]
	private static bool TryRenamedTypeLookup(string previousTypeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x2E380B0", Offset = "0x2E366B0", VA = "0x182E380B0")]
	public static Dictionary<string, string> RenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x2E36F70", Offset = "0x2E35570", VA = "0x182E36F70")]
	private static Dictionary<string, string> FetchRenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x2E373B0", Offset = "0x2E359B0", VA = "0x182E373B0")]
	private static Dictionary<string, string> FetchRenamedNamespaces()
	{
		return null;
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x2E36BB0", Offset = "0x2E351B0", VA = "0x182E36BB0")]
	private static Dictionary<string, string> FetchRenamedAssemblies()
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x2E37770", Offset = "0x2E35D70", VA = "0x182E37770")]
	private static Dictionary<string, Type> FetchRenamedTypes()
	{
		return null;
	}
}
