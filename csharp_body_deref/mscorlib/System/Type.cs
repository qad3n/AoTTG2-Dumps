// ==================== AoTTG2 cross-reference ====================
// Type: System.Type
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000120")]
public abstract class Type : MemberInfo
{
	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Binder s_defaultBinder;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char Delimiter;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly Type[] EmptyTypes;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly object Missing;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly MemberFilter FilterAttribute;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly MemberFilter FilterName;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly MemberFilter FilterNameIgnoreCase;

	[Token(Token = "0x4000402")]
	private const BindingFlags DefaultLookup = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal RuntimeTypeHandle _impl;

	[Token(Token = "0x4000404")]
	internal const string DefaultTypeNameWhenMissingMetadata = "UnknownType";

	[Token(Token = "0x170000C6")]
	public virtual bool IsSerializable
	{
		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x3CD4410", Offset = "0x3CD4410", VA = "0x3CD4410", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x3CD4680", Offset = "0x3CD4680", VA = "0x3CD4680", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public bool IsVisible
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x3CD4800", Offset = "0x3CD4800", VA = "0x3CD4800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C9")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x3CD54E0", Offset = "0x3CD54E0", VA = "0x3CD54E0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170000CA")]
	public abstract string Namespace
	{
		[Token(Token = "0x6000AA4")]
		get;
	}

	[Token(Token = "0x170000CB")]
	public abstract string AssemblyQualifiedName
	{
		[Token(Token = "0x6000AA5")]
		get;
	}

	[Token(Token = "0x170000CC")]
	public abstract string FullName
	{
		[Token(Token = "0x6000AA6")]
		get;
	}

	[Token(Token = "0x170000CD")]
	public abstract Assembly Assembly
	{
		[Token(Token = "0x6000AA7")]
		get;
	}

	[Token(Token = "0x170000CE")]
	public new abstract Module Module
	{
		[Token(Token = "0x6000AA8")]
		get;
	}

	[Token(Token = "0x170000CF")]
	public bool IsNested
	{
		[Token(Token = "0x6000AA9")]
		[Address(RVA = "0x3CD4990", Offset = "0x3CD4990", VA = "0x3CD4990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x3CD5500", Offset = "0x3CD5500", VA = "0x3CD5500", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual MethodBase DeclaringMethod
	{
		[Token(Token = "0x6000AAB")]
		[Address(RVA = "0x3CD5510", Offset = "0x3CD5510", VA = "0x3CD5510", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000AAC")]
		[Address(RVA = "0x3CD5520", Offset = "0x3CD5520", VA = "0x3CD5520", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public abstract Type UnderlyingSystemType
	{
		[Token(Token = "0x6000AAD")]
		get;
	}

	[Token(Token = "0x170000D4")]
	public bool IsArray
	{
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x3CD5530", Offset = "0x3CD5530", VA = "0x3CD5530", Slot = "31")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D5")]
	public bool IsByRef
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x3CD5550", Offset = "0x3CD5550", VA = "0x3CD5550", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public bool IsPointer
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x3CD5570", Offset = "0x3CD5570", VA = "0x3CD5570", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	public virtual bool IsConstructedGenericType
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x3CD5590", Offset = "0x3CD5590", VA = "0x3CD5590", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	public virtual bool IsGenericParameter
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x3CD55F0", Offset = "0x3CD55F0", VA = "0x3CD55F0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public virtual bool IsGenericMethodParameter
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x3CD5600", Offset = "0x3CD5600", VA = "0x3CD5600", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DA")]
	public virtual bool IsGenericType
	{
		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x3CD5640", Offset = "0x3CD5640", VA = "0x3CD5640", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	public virtual bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x3CD5650", Offset = "0x3CD5650", VA = "0x3CD5650", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	public virtual bool IsSZArray
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x3CD5660", Offset = "0x3CD5660", VA = "0x3CD5660", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	public virtual bool IsVariableBoundArray
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x3CD5680", Offset = "0x3CD5680", VA = "0x3CD5680", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	public virtual bool IsByRefLike
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x3CD56C0", Offset = "0x3CD56C0", VA = "0x3CD56C0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public bool HasElementType
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x3CD4790", Offset = "0x3CD4790", VA = "0x3CD4790", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E0")]
	public virtual Type[] GenericTypeArguments
	{
		[Token(Token = "0x6000AC1")]
		[Address(RVA = "0x3CD57B0", Offset = "0x3CD57B0", VA = "0x3CD57B0", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public virtual int GenericParameterPosition
	{
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x3CD5910", Offset = "0x3CD5910", VA = "0x3CD5910", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public virtual GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x3CD5960", Offset = "0x3CD5960", VA = "0x3CD5960", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x170000E3")]
	public TypeAttributes Attributes
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x3CD5A10", Offset = "0x3CD5A10", VA = "0x3CD5A10", Slot = "55")]
		get
		{
			return default(TypeAttributes);
		}
	}

	[Token(Token = "0x170000E4")]
	public bool IsAbstract
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x3CD5A30", Offset = "0x3CD5A30", VA = "0x3CD5A30", Slot = "57")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public bool IsSealed
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x3CD5A50", Offset = "0x3CD5A50", VA = "0x3CD5A50", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x3CD5A70", Offset = "0x3CD5A70", VA = "0x3CD5A70", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public bool IsClass
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x3CD5A90", Offset = "0x3CD5A90", VA = "0x3CD5A90", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IsNestedAssembly
	{
		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x3CD5AF0", Offset = "0x3CD5AF0", VA = "0x3CD5AF0", Slot = "61")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IsNestedPublic
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x3CD4970", Offset = "0x3CD4970", VA = "0x3CD4970", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IsNotPublic
	{
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x3CD5B10", Offset = "0x3CD5B10", VA = "0x3CD5B10", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IsPublic
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x3CD49D0", Offset = "0x3CD49D0", VA = "0x3CD49D0", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool IsExplicitLayout
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x3CD5B30", Offset = "0x3CD5B30", VA = "0x3CD5B30", Slot = "65")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool IsCOMObject
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x3CD5B50", Offset = "0x3CD5B50", VA = "0x3CD5B50", Slot = "66")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	public bool IsContextful
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x3CD5B70", Offset = "0x3CD5B70", VA = "0x3CD5B70", Slot = "68")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public virtual bool IsCollectible
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x3CD5C30", Offset = "0x3CD5C30", VA = "0x3CD5C30", Slot = "70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual bool IsEnum
	{
		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x3CD5C40", Offset = "0x3CD5C40", VA = "0x3CD5C40", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F1")]
	public bool IsMarshalByRef
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x3CD5CB0", Offset = "0x3CD5CB0", VA = "0x3CD5CB0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public bool IsPrimitive
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x3CD5D70", Offset = "0x3CD5D70", VA = "0x3CD5D70", Slot = "74")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public bool IsValueType
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x3CD5AD0", Offset = "0x3CD5AD0", VA = "0x3CD5AD0", Slot = "76")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	public virtual bool IsSignatureType
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x3CD5E00", Offset = "0x3CD5E00", VA = "0x3CD5E00", Slot = "78")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	public virtual RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x3CD65F0", Offset = "0x3CD65F0", VA = "0x3CD65F0", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x170000F6")]
	public abstract Type BaseType
	{
		[Token(Token = "0x6000B05")]
		get;
	}

	[Token(Token = "0x170000F7")]
	public static Binder DefaultBinder
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x3CD6D30", Offset = "0x3CD6D30", VA = "0x3CD6D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	internal virtual bool IsSzArray
	{
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x3CD6E30", Offset = "0x3CD6E30", VA = "0x3CD6E30", Slot = "129")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F9")]
	public bool IsInterface
	{
		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x3CD4C80", Offset = "0x3CD4C80", VA = "0x3CD4C80", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	internal string FullNameOrDefault
	{
		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x3CD7010", Offset = "0x3CD7010", VA = "0x3CD7010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	internal string InternalNameIfAvailable
	{
		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x3CD7110", Offset = "0x3CD7110", VA = "0x3CD7110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	internal string NameOrDefault
	{
		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x3CD7150", Offset = "0x3CD7150", VA = "0x3CD7150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x3CD3250", Offset = "0x3CD3250", VA = "0x3CD3250", Slot = "16")]
	public virtual bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x3CD3B10", Offset = "0x3CD3B10", VA = "0x3CD3B10", Slot = "17")]
	public virtual string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x3CD3CF0", Offset = "0x3CD3CF0", VA = "0x3CD3CF0", Slot = "18")]
	public virtual string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x3CD38C0", Offset = "0x3CD38C0", VA = "0x3CD38C0")]
	private Array GetEnumRawConstantValues()
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x3CD3DA0", Offset = "0x3CD3DA0", VA = "0x3CD3DA0")]
	private void GetEnumData(out string[] enumNames, out Array enumValues)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x3CD38F0", Offset = "0x3CD38F0", VA = "0x3CD38F0")]
	private static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x3CD3600", Offset = "0x3CD3600", VA = "0x3CD3600")]
	internal static bool IsIntegerType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x3CD47B0", Offset = "0x3CD47B0", VA = "0x3CD47B0")]
	internal Type GetRootElementType()
	{
		return null;
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x3CD49F0", Offset = "0x3CD49F0", VA = "0x3CD49F0", Slot = "21")]
	[ComVisible(true)]
	public virtual bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x3CD4AA0", Offset = "0x3CD4AA0", VA = "0x3CD4AA0", Slot = "22")]
	public virtual bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x3CD4D40", Offset = "0x3CD4D40", VA = "0x3CD4D40")]
	internal bool ImplementInterface(Type ifaceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x3CD4EA0", Offset = "0x3CD4EA0", VA = "0x3CD4EA0")]
	private static bool FilterAttributeImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x3CD5210", Offset = "0x3CD5210", VA = "0x3CD5210")]
	private static bool FilterNameImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x3CD5360", Offset = "0x3CD5360", VA = "0x3CD5360")]
	private static bool FilterNameIgnoreCaseImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x3CD54D0", Offset = "0x3CD54D0", VA = "0x3CD54D0")]
	protected Type()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x3CD54F0", Offset = "0x3CD54F0", VA = "0x3CD54F0", Slot = "23")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000AAF")]
	protected abstract bool IsArrayImpl();

	[Token(Token = "0x6000AB1")]
	protected abstract bool IsByRefImpl();

	[Token(Token = "0x6000AB3")]
	protected abstract bool IsPointerImpl();

	[Token(Token = "0x6000ABD")]
	protected abstract bool HasElementTypeImpl();

	[Token(Token = "0x6000ABE")]
	public abstract Type GetElementType();

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x3CD5710", Offset = "0x3CD5710", VA = "0x3CD5710", Slot = "48")]
	public virtual int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x3CD5760", Offset = "0x3CD5760", VA = "0x3CD5760", Slot = "49")]
	public virtual Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x3CD58C0", Offset = "0x3CD58C0", VA = "0x3CD58C0", Slot = "51")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x3CD59A0", Offset = "0x3CD59A0", VA = "0x3CD59A0", Slot = "54")]
	public virtual Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	protected abstract TypeAttributes GetAttributeFlagsImpl();

	[Token(Token = "0x6000AD2")]
	protected abstract bool IsCOMObjectImpl();

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x3CD5B90", Offset = "0x3CD5B90", VA = "0x3CD5B90", Slot = "69")]
	protected virtual bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x3CD5CD0", Offset = "0x3CD5CD0", VA = "0x3CD5CD0", Slot = "73")]
	protected virtual bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	protected abstract bool IsPrimitiveImpl();

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x3CD5D90", Offset = "0x3CD5D90", VA = "0x3CD5D90", Slot = "77")]
	protected virtual bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x3CD5E10", Offset = "0x3CD5E10", VA = "0x3CD5E10", Slot = "79")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x3CD5E30", Offset = "0x3CD5E30", VA = "0x3CD5E30", Slot = "80")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x3CD5E50", Offset = "0x3CD5E50", VA = "0x3CD5E50", Slot = "81")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	protected abstract ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x3CD5F50", Offset = "0x3CD5F50", VA = "0x3CD5F50", Slot = "83")]
	[ComVisible(true)]
	public ConstructorInfo[] GetConstructors()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[ComVisible(true)]
	public abstract ConstructorInfo[] GetConstructors(BindingFlags bindingAttr);

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x3CD5F70", Offset = "0x3CD5F70", VA = "0x3CD5F70", Slot = "85")]
	public EventInfo GetEvent(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	public abstract EventInfo GetEvent(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AE6")]
	public abstract EventInfo[] GetEvents(BindingFlags bindingAttr);

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x3CD5F90", Offset = "0x3CD5F90", VA = "0x3CD5F90", Slot = "88")]
	public FieldInfo GetField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AE8")]
	public abstract FieldInfo GetField(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x3CD5FB0", Offset = "0x3CD5FB0", VA = "0x3CD5FB0", Slot = "90")]
	public FieldInfo[] GetFields()
	{
		return null;
	}

	[Token(Token = "0x6000AEA")]
	public abstract FieldInfo[] GetFields(BindingFlags bindingAttr);

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x3CD5FD0", Offset = "0x3CD5FD0", VA = "0x3CD5FD0", Slot = "92")]
	public MemberInfo[] GetMember(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x3CD5FF0", Offset = "0x3CD5FF0", VA = "0x3CD5FF0", Slot = "93")]
	public virtual MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x3CD6010", Offset = "0x3CD6010", VA = "0x3CD6010", Slot = "94")]
	public virtual MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AEE")]
	public abstract MemberInfo[] GetMembers(BindingFlags bindingAttr);

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x3CD6060", Offset = "0x3CD6060", VA = "0x3CD6060", Slot = "96")]
	public MethodInfo GetMethod(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x3CD60E0", Offset = "0x3CD60E0", VA = "0x3CD60E0", Slot = "97")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x3CD6160", Offset = "0x3CD6160", VA = "0x3CD6160", Slot = "98")]
	public MethodInfo GetMethod(string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x3CD6190", Offset = "0x3CD6190", VA = "0x3CD6190", Slot = "99")]
	public MethodInfo GetMethod(string name, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x3CD61C0", Offset = "0x3CD61C0", VA = "0x3CD61C0", Slot = "100")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x3CD61E0", Offset = "0x3CD61E0", VA = "0x3CD61E0", Slot = "101")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF5")]
	protected abstract MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x3CD6310", Offset = "0x3CD6310", VA = "0x3CD6310", Slot = "103")]
	public MethodInfo[] GetMethods()
	{
		return null;
	}

	[Token(Token = "0x6000AF7")]
	public abstract MethodInfo[] GetMethods(BindingFlags bindingAttr);

	[Token(Token = "0x6000AF8")]
	public abstract Type GetNestedType(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x3CD6330", Offset = "0x3CD6330", VA = "0x3CD6330", Slot = "106")]
	public PropertyInfo GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x3CD63B0", Offset = "0x3CD63B0", VA = "0x3CD63B0", Slot = "107")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x3CD6430", Offset = "0x3CD6430", VA = "0x3CD6430", Slot = "108")]
	public PropertyInfo GetProperty(string name, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x3CD6500", Offset = "0x3CD6500", VA = "0x3CD6500", Slot = "109")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x3CD6530", Offset = "0x3CD6530", VA = "0x3CD6530", Slot = "110")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x3CD6560", Offset = "0x3CD6560", VA = "0x3CD6560", Slot = "111")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	protected abstract PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B00")]
	public abstract PropertyInfo[] GetProperties(BindingFlags bindingAttr);

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x3CD6630", Offset = "0x3CD6630", VA = "0x3CD6630")]
	public static RuntimeTypeHandle GetTypeHandle(object o)
	{
		return default(RuntimeTypeHandle);
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x3CD66B0", Offset = "0x3CD66B0", VA = "0x3CD66B0")]
	public static TypeCode GetTypeCode(Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x3CD6700", Offset = "0x3CD6700", VA = "0x3CD6700", Slot = "115")]
	protected virtual TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B06")]
	public abstract object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters);

	[Token(Token = "0x6000B07")]
	public abstract Type[] GetInterfaces();

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x3CD6810", Offset = "0x3CD6810", VA = "0x3CD6810", Slot = "119")]
	public virtual bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x3CD6850", Offset = "0x3CD6850", VA = "0x3CD6850", Slot = "120")]
	public virtual bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x3CD6890", Offset = "0x3CD6890", VA = "0x3CD6890", Slot = "121")]
	public virtual Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x3CD6980", Offset = "0x3CD6980", VA = "0x3CD6980", Slot = "122")]
	public virtual Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x3CD6A00", Offset = "0x3CD6A00", VA = "0x3CD6A00", Slot = "123")]
	public virtual Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x3CD6A40", Offset = "0x3CD6A40", VA = "0x3CD6A40", Slot = "124")]
	public virtual Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x3CD6A80", Offset = "0x3CD6A80", VA = "0x3CD6A80", Slot = "125")]
	public virtual Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x3CD6AC0", Offset = "0x3CD6AC0", VA = "0x3CD6AC0", Slot = "126")]
	public virtual Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x3CD6B10", Offset = "0x3CD6B10", VA = "0x3CD6B10", Slot = "127")]
	public virtual Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x3CD6B50", Offset = "0x3CD6B50", VA = "0x3CD6B50")]
	public static Type MakeGenericSignatureType(Type genericTypeDefinition, params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x3CD6BB0", Offset = "0x3CD6BB0", VA = "0x3CD6BB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x3CD6C00", Offset = "0x3CD6C00", VA = "0x3CD6C00", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x3CD6C60", Offset = "0x3CD6C60", VA = "0x3CD6C60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x3CD6CB0", Offset = "0x3CD6CB0", VA = "0x3CD6CB0", Slot = "128")]
	public virtual bool Equals(Type o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x3CC8C30", Offset = "0x3CC8C30", VA = "0x3CC8C30")]
	public static Type GetTypeFromHandle(RuntimeTypeHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x3CD6E20", Offset = "0x3CD6E20", VA = "0x3CD6E20")]
	private static extern Type internal_from_handle(IntPtr handle);

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x3CD6E40", Offset = "0x3CD6E40", VA = "0x3CD6E40")]
	internal string FormatTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x3CD6E60", Offset = "0x3CD6E60", VA = "0x3CD6E60", Slot = "130")]
	internal virtual string FormatTypeName(bool serialization)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x3CD6EA0", Offset = "0x3CD6EA0", VA = "0x3CD6EA0")]
	public static Type GetType(string typeName, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x3CD6F10", Offset = "0x3CD6F10", VA = "0x3CD6F10")]
	public static Type GetType(string typeName, bool throwOnError)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x3CD6F80", Offset = "0x3CD6F80", VA = "0x3CD6F80")]
	public static Type GetType(string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x3CD6FE0", Offset = "0x3CD6FE0", VA = "0x3CD6FE0")]
	public static Type GetType(string typeName, Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x3CD35F0", Offset = "0x3CD35F0", VA = "0x3CD35F0")]
	public static bool operator ==(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x3CD4670", Offset = "0x3CD4670", VA = "0x3CD4670")]
	public static bool operator !=(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x3CD4600", Offset = "0x3CD4600", VA = "0x3CD4600")]
	internal bool IsRuntimeImplemented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x3CD7130", Offset = "0x3CD7130", VA = "0x3CD7130", Slot = "132")]
	internal virtual string InternalGetNameIfAvailable(ref Type rootCauseForFailure)
	{
		return null;
	}
}
