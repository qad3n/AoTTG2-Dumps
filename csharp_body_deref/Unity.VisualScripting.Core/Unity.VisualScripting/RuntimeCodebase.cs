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
			[Address(RVA = "0x4A284D0", Offset = "0x4A284D0", VA = "0x4A284D0", Slot = "6")]
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
			[Address(RVA = "0x4A28520", Offset = "0x4A28520", VA = "0x4A28520", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x4A237A0", Offset = "0x4A237A0", VA = "0x4A237A0")]
		[DebuggerHidden]
		public _003CGetAssemblyAttributes_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x4A279F0", Offset = "0x4A279F0", VA = "0x4A279F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E9D")]
		[Address(RVA = "0x4A27C60", Offset = "0x4A27C60", VA = "0x4A27C60", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E9E")]
		[Address(RVA = "0x4A28430", Offset = "0x4A28430", VA = "0x4A28430")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0x4A28390", Offset = "0x4A28390", VA = "0x4A28390")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0x4A284E0", Offset = "0x4A284E0", VA = "0x4A284E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000EA3")]
		[Address(RVA = "0x4A28530", Offset = "0x4A28530", VA = "0x4A28530", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EA4")]
		[Address(RVA = "0x4A285E0", Offset = "0x4A285E0", VA = "0x4A285E0", Slot = "5")]
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
		[Address(RVA = "0x4A22BD0", Offset = "0x4A22BD0", VA = "0x4A22BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public static IEnumerable<Assembly> assemblies
	{
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x4A22C40", Offset = "0x4A22C40", VA = "0x4A22C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	public static Dictionary<string, string> renamedNamespaces
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x4A25230", Offset = "0x4A25230", VA = "0x4A25230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public static Dictionary<string, string> renamedAssemblies
	{
		[Token(Token = "0x6000E92")]
		[Address(RVA = "0x4A25590", Offset = "0x4A25590", VA = "0x4A25590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public static Dictionary<string, Type> renamedTypes
	{
		[Token(Token = "0x6000E93")]
		[Address(RVA = "0x4A25060", Offset = "0x4A25060", VA = "0x4A25060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x4A22CB0", Offset = "0x4A22CB0", VA = "0x4A22CB0")]
	static RuntimeCodebase()
	{
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x4A23660", Offset = "0x4A23660", VA = "0x4A23660")]
	public static IEnumerable<Attribute> GetAssemblyAttributes(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x4A23710", Offset = "0x4A23710", VA = "0x4A23710")]
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
	[Address(RVA = "0x4A237D0", Offset = "0x4A237D0", VA = "0x4A237D0")]
	public static void PrewarmTypeDeserialization(Type type)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4A23910", Offset = "0x4A23910", VA = "0x4A23910")]
	public static string SerializeType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4A239B0", Offset = "0x4A239B0", VA = "0x4A239B0")]
	public static bool TryDeserializeType(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4A24890", Offset = "0x4A24890", VA = "0x4A24890")]
	public static Type DeserializeType(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x4A24970", Offset = "0x4A24970", VA = "0x4A24970")]
	public static void ClearCachedTypes()
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x4A23C40", Offset = "0x4A23C40", VA = "0x4A23C40")]
	private static bool TryCachedTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x4A23CE0", Offset = "0x4A23CE0", VA = "0x4A23CE0")]
	private static bool TrySystemTypeLookup(string typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x4A24A00", Offset = "0x4A24A00", VA = "0x4A24A00")]
	private static bool TrySystemTypeLookup(TypeName typeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x4A24150", Offset = "0x4A24150", VA = "0x4A24150")]
	private static bool TryRenamedTypeLookup(string previousTypeName, out Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x4A27190", Offset = "0x4A27190", VA = "0x4A27190")]
	public static Dictionary<string, string> RenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x4A27270", Offset = "0x4A27270", VA = "0x4A27270")]
	private static Dictionary<string, string> FetchRenamedMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x4A25850", Offset = "0x4A25850", VA = "0x4A25850")]
	private static Dictionary<string, string> FetchRenamedNamespaces()
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x4A25E60", Offset = "0x4A25E60", VA = "0x4A25E60")]
	private static Dictionary<string, string> FetchRenamedAssemblies()
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x4A26470", Offset = "0x4A26470", VA = "0x4A26470")]
	private static Dictionary<string, Type> FetchRenamedTypes()
	{
		return null;
	}
}
