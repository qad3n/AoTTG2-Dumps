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
			[Address(RVA = "0x6838740", Offset = "0x6837740", VA = "0x6838740", Slot = "6")]
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
			[Address(RVA = "0x6838790", Offset = "0x6837790", VA = "0x6838790", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000EA5")]
		[Address(RVA = "0x6834050", Offset = "0x6833050", VA = "0x6834050")]
		[DebuggerHidden]
		public _003CGetAssemblyAttributes_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000EA6")]
		[Address(RVA = "0x6837CD0", Offset = "0x6836CD0", VA = "0x6837CD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000EA7")]
		[Address(RVA = "0x6837ED0", Offset = "0x6836ED0", VA = "0x6837ED0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x68386A0", Offset = "0x68376A0", VA = "0x68386A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x6838600", Offset = "0x6837600", VA = "0x6838600")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x6838750", Offset = "0x6837750", VA = "0x6838750", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x68387A0", Offset = "0x68377A0", VA = "0x68387A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x6838840", Offset = "0x6837840", VA = "0x6838840", Slot = "5")]
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
		[Address(RVA = "0x68334E0", Offset = "0x68324E0", VA = "0x68334E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public static IEnumerable<Assembly> assemblies
	{
		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x6833550", Offset = "0x6832550", VA = "0x6833550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	public static Dictionary<string, string> renamedNamespaces
	{
		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x6835910", Offset = "0x6834910", VA = "0x6835910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	public static Dictionary<string, string> renamedAssemblies
	{
		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x6835C60", Offset = "0x6834C60", VA = "0x6835C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	public static Dictionary<string, Type> renamedTypes
	{
		[Token(Token = "0x6000E9D")]
		[Address(RVA = "0x6835740", Offset = "0x6834740", VA = "0x6835740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x68335C0", Offset = "0x68325C0", VA = "0x68335C0")]
	static RuntimeCodebase()
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x6833E80", Offset = "0x6832E80", VA = "0x6833E80")]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x6833FD0", Offset = "0x6832FD0", VA = "0x6833FD0")]
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
	[Address(RVA = "0x6834080", Offset = "0x6833080", VA = "0x6834080")]
	public static void PrewarmTypeDeserialization(Type type)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x68341C0", Offset = "0x68331C0", VA = "0x68341C0")]
	public static string SerializeType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x6834260", Offset = "0x6833260", VA = "0x6834260")]
	public static bool TryDeserializeType(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x6835010", Offset = "0x6834010", VA = "0x6835010")]
	public static Type DeserializeType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x68350F0", Offset = "0x68340F0", VA = "0x68350F0")]
	public static void ClearCachedTypes()
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x68344B0", Offset = "0x68334B0", VA = "0x68344B0")]
	private static bool TryCachedTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x6834550", Offset = "0x6833550", VA = "0x6834550")]
	private static bool TrySystemTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x6835180", Offset = "0x6834180", VA = "0x6835180")]
	private static bool TrySystemTypeLookup(TypeName typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x68349F0", Offset = "0x68339F0", VA = "0x68349F0")]
	private static bool TryRenamedTypeLookup(string previousTypeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x6837520", Offset = "0x6836520", VA = "0x6837520")]
	public static Dictionary<string, string> RenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x6837600", Offset = "0x6836600", VA = "0x6837600")]
	private static Dictionary<string, string> FetchRenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x6835F00", Offset = "0x6834F00", VA = "0x6835F00")]
	private static Dictionary<string, string> FetchRenamedNamespaces()
	{
		return null;
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x6836440", Offset = "0x6835440", VA = "0x6836440")]
	private static Dictionary<string, string> FetchRenamedAssemblies()
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x6836980", Offset = "0x6835980", VA = "0x6836980")]
	private static Dictionary<string, Type> FetchRenamedTypes()
	{
		return null;
	}
}
