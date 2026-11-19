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
	[Token(Token = "0x40003BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Binder s_defaultBinder;

	[Token(Token = "0x40003BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char Delimiter;

	[Token(Token = "0x40003C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly Type[] EmptyTypes;

	[Token(Token = "0x40003C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly object Missing;

	[Token(Token = "0x40003C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly MemberFilter FilterAttribute;

	[Token(Token = "0x40003C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly MemberFilter FilterName;

	[Token(Token = "0x40003C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly MemberFilter FilterNameIgnoreCase;

	[Token(Token = "0x40003C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal RuntimeTypeHandle _impl;

	[Token(Token = "0x170000C6")]
	public virtual bool IsSerializable
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x54D8460", Offset = "0x54D7460", VA = "0x54D8460", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x54D86C0", Offset = "0x54D76C0", VA = "0x54D86C0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public bool IsVisible
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x54D8850", Offset = "0x54D7850", VA = "0x54D8850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C9")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x54D9520", Offset = "0x54D8520", VA = "0x54D9520", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170000CA")]
	public abstract string Namespace
	{
		[Token(Token = "0x6000AC5")]
		get;
	}

	[Token(Token = "0x170000CB")]
	public abstract string AssemblyQualifiedName
	{
		[Token(Token = "0x6000AC6")]
		get;
	}

	[Token(Token = "0x170000CC")]
	public abstract string FullName
	{
		[Token(Token = "0x6000AC7")]
		get;
	}

	[Token(Token = "0x170000CD")]
	public abstract Assembly Assembly
	{
		[Token(Token = "0x6000AC8")]
		get;
	}

	[Token(Token = "0x170000CE")]
	public new abstract Module Module
	{
		[Token(Token = "0x6000AC9")]
		get;
	}

	[Token(Token = "0x170000CF")]
	public bool IsNested
	{
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x54D89F0", Offset = "0x54D79F0", VA = "0x54D89F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x54D9540", Offset = "0x54D8540", VA = "0x54D9540", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual MethodBase DeclaringMethod
	{
		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x54D9550", Offset = "0x54D8550", VA = "0x54D9550", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x54D9560", Offset = "0x54D8560", VA = "0x54D9560", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public abstract Type UnderlyingSystemType
	{
		[Token(Token = "0x6000ACE")]
		get;
	}

	[Token(Token = "0x170000D4")]
	public bool IsArray
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x54D9570", Offset = "0x54D8570", VA = "0x54D9570", Slot = "31")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D5")]
	public bool IsByRef
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x54D9590", Offset = "0x54D8590", VA = "0x54D9590", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public bool IsPointer
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x54D95B0", Offset = "0x54D85B0", VA = "0x54D95B0", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	public virtual bool IsConstructedGenericType
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x54D95D0", Offset = "0x54D85D0", VA = "0x54D95D0", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	public virtual bool IsGenericParameter
	{
		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x54D9630", Offset = "0x54D8630", VA = "0x54D9630", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public virtual bool IsGenericMethodParameter
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x54D9640", Offset = "0x54D8640", VA = "0x54D9640", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DA")]
	public virtual bool IsGenericType
	{
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x54D9680", Offset = "0x54D8680", VA = "0x54D9680", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	public virtual bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x54D9690", Offset = "0x54D8690", VA = "0x54D9690", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	public virtual bool IsSZArray
	{
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x54D96A0", Offset = "0x54D86A0", VA = "0x54D96A0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	public virtual bool IsVariableBoundArray
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x54D96C0", Offset = "0x54D86C0", VA = "0x54D96C0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	public virtual bool IsByRefLike
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x54D9700", Offset = "0x54D8700", VA = "0x54D9700", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public bool HasElementType
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x54D87E0", Offset = "0x54D77E0", VA = "0x54D87E0", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E0")]
	public virtual Type[] GenericTypeArguments
	{
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x54D97F0", Offset = "0x54D87F0", VA = "0x54D97F0", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public virtual int GenericParameterPosition
	{
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x54D9950", Offset = "0x54D8950", VA = "0x54D9950", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public virtual GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x54D99A0", Offset = "0x54D89A0", VA = "0x54D99A0", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x170000E3")]
	public TypeAttributes Attributes
	{
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x54D9A50", Offset = "0x54D8A50", VA = "0x54D9A50", Slot = "55")]
		get
		{
			return default(TypeAttributes);
		}
	}

	[Token(Token = "0x170000E4")]
	public bool IsAbstract
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x54D9A70", Offset = "0x54D8A70", VA = "0x54D9A70", Slot = "57")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public bool IsSealed
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x54D9A90", Offset = "0x54D8A90", VA = "0x54D9A90", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x54D9AB0", Offset = "0x54D8AB0", VA = "0x54D9AB0", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public bool IsClass
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x54D9AD0", Offset = "0x54D8AD0", VA = "0x54D9AD0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IsNestedAssembly
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x54D9B30", Offset = "0x54D8B30", VA = "0x54D9B30", Slot = "61")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IsNestedPrivate
	{
		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x54D9B50", Offset = "0x54D8B50", VA = "0x54D9B50", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IsNestedPublic
	{
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x54D89D0", Offset = "0x54D79D0", VA = "0x54D89D0", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IsNotPublic
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x54D9B70", Offset = "0x54D8B70", VA = "0x54D9B70", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool IsPublic
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x54D8A30", Offset = "0x54D7A30", VA = "0x54D8A30", Slot = "65")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool IsExplicitLayout
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x54D9B90", Offset = "0x54D8B90", VA = "0x54D9B90", Slot = "66")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	public bool IsCOMObject
	{
		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x54D9BB0", Offset = "0x54D8BB0", VA = "0x54D9BB0", Slot = "67")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public bool IsContextful
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x54D9BD0", Offset = "0x54D8BD0", VA = "0x54D9BD0", Slot = "69")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual bool IsCollectible
	{
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x54D9C90", Offset = "0x54D8C90", VA = "0x54D9C90", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F1")]
	public virtual bool IsEnum
	{
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x54D9CA0", Offset = "0x54D8CA0", VA = "0x54D9CA0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public bool IsMarshalByRef
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x54D9D10", Offset = "0x54D8D10", VA = "0x54D9D10", Slot = "73")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public bool IsPrimitive
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x54D9DD0", Offset = "0x54D8DD0", VA = "0x54D9DD0", Slot = "75")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	public bool IsValueType
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x54D9B10", Offset = "0x54D8B10", VA = "0x54D9B10", Slot = "77")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	public virtual bool IsSignatureType
	{
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x54D9E60", Offset = "0x54D8E60", VA = "0x54D9E60", Slot = "79")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	public virtual RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000B24")]
		[Address(RVA = "0x54DA650", Offset = "0x54D9650", VA = "0x54DA650", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x170000F7")]
	public abstract Type BaseType
	{
		[Token(Token = "0x6000B28")]
		get;
	}

	[Token(Token = "0x170000F8")]
	public static Binder DefaultBinder
	{
		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x54DAD90", Offset = "0x54D9D90", VA = "0x54DAD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	internal virtual bool IsSzArray
	{
		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x54DAE90", Offset = "0x54D9E90", VA = "0x54DAE90", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	public bool IsInterface
	{
		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x54D8D00", Offset = "0x54D7D00", VA = "0x54D8D00", Slot = "133")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal string FullNameOrDefault
	{
		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x54DB070", Offset = "0x54DA070", VA = "0x54DB070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	internal string InternalNameIfAvailable
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x54DB170", Offset = "0x54DA170", VA = "0x54DB170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	internal string NameOrDefault
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x54DB1B0", Offset = "0x54DA1B0", VA = "0x54DB1B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x54D7250", Offset = "0x54D6250", VA = "0x54D7250", Slot = "16")]
	public virtual bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x54D7AD0", Offset = "0x54D6AD0", VA = "0x54D7AD0", Slot = "17")]
	public virtual string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x54D7CB0", Offset = "0x54D6CB0", VA = "0x54D7CB0", Slot = "18")]
	public virtual string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x54D7880", Offset = "0x54D6880", VA = "0x54D7880")]
	private Array GetEnumRawConstantValues()
	{
		return null;
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x54D7D60", Offset = "0x54D6D60", VA = "0x54D7D60")]
	private void GetEnumData(out string[] enumNames, out Array enumValues)
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x54D78B0", Offset = "0x54D68B0", VA = "0x54D78B0")]
	private static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x54D7610", Offset = "0x54D6610", VA = "0x54D7610")]
	internal static bool IsIntegerType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x54D8800", Offset = "0x54D7800", VA = "0x54D8800")]
	internal Type GetRootElementType()
	{
		return null;
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x54D8A50", Offset = "0x54D7A50", VA = "0x54D8A50", Slot = "21")]
	[ComVisible(true)]
	public virtual bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x54D8B10", Offset = "0x54D7B10", VA = "0x54D8B10", Slot = "22")]
	public virtual bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x54D8DC0", Offset = "0x54D7DC0", VA = "0x54D8DC0")]
	internal bool ImplementInterface(Type ifaceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x54D8EF0", Offset = "0x54D7EF0", VA = "0x54D8EF0")]
	private static bool FilterAttributeImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x54D9260", Offset = "0x54D8260", VA = "0x54D9260")]
	private static bool FilterNameImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x54D93B0", Offset = "0x54D83B0", VA = "0x54D93B0")]
	private static bool FilterNameIgnoreCaseImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x54D9510", Offset = "0x54D8510", VA = "0x54D9510")]
	protected Type()
	{
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x54D9530", Offset = "0x54D8530", VA = "0x54D9530", Slot = "23")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000AD0")]
	protected abstract bool IsArrayImpl();

	[Token(Token = "0x6000AD2")]
	protected abstract bool IsByRefImpl();

	[Token(Token = "0x6000AD4")]
	protected abstract bool IsPointerImpl();

	[Token(Token = "0x6000ADE")]
	protected abstract bool HasElementTypeImpl();

	[Token(Token = "0x6000ADF")]
	public abstract Type GetElementType();

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x54D9750", Offset = "0x54D8750", VA = "0x54D9750", Slot = "48")]
	public virtual int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x54D97A0", Offset = "0x54D87A0", VA = "0x54D97A0", Slot = "49")]
	public virtual Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x54D9900", Offset = "0x54D8900", VA = "0x54D9900", Slot = "51")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x54D99E0", Offset = "0x54D89E0", VA = "0x54D99E0", Slot = "54")]
	public virtual Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000AE8")]
	protected abstract TypeAttributes GetAttributeFlagsImpl();

	[Token(Token = "0x6000AF4")]
	protected abstract bool IsCOMObjectImpl();

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x54D9BF0", Offset = "0x54D8BF0", VA = "0x54D9BF0", Slot = "70")]
	protected virtual bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x54D9D30", Offset = "0x54D8D30", VA = "0x54D9D30", Slot = "74")]
	protected virtual bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFC")]
	protected abstract bool IsPrimitiveImpl();

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x54D9DF0", Offset = "0x54D8DF0", VA = "0x54D9DF0", Slot = "78")]
	protected virtual bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x54D9E70", Offset = "0x54D8E70", VA = "0x54D9E70", Slot = "80")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x54D9E90", Offset = "0x54D8E90", VA = "0x54D9E90", Slot = "81")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x54D9EB0", Offset = "0x54D8EB0", VA = "0x54D9EB0", Slot = "82")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B03")]
	protected abstract ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x54D9FB0", Offset = "0x54D8FB0", VA = "0x54D9FB0", Slot = "84")]
	[ComVisible(true)]
	public ConstructorInfo[] GetConstructors()
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[ComVisible(true)]
	public abstract ConstructorInfo[] GetConstructors(BindingFlags bindingAttr);

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x54D9FD0", Offset = "0x54D8FD0", VA = "0x54D9FD0", Slot = "86")]
	public EventInfo GetEvent(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	public abstract EventInfo GetEvent(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B08")]
	public abstract EventInfo[] GetEvents(BindingFlags bindingAttr);

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x54D9FF0", Offset = "0x54D8FF0", VA = "0x54D9FF0", Slot = "89")]
	public FieldInfo GetField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	public abstract FieldInfo GetField(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x54DA010", Offset = "0x54D9010", VA = "0x54DA010", Slot = "91")]
	public FieldInfo[] GetFields()
	{
		return null;
	}

	[Token(Token = "0x6000B0C")]
	public abstract FieldInfo[] GetFields(BindingFlags bindingAttr);

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x54DA030", Offset = "0x54D9030", VA = "0x54DA030", Slot = "93")]
	public MemberInfo[] GetMember(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x54DA050", Offset = "0x54D9050", VA = "0x54DA050", Slot = "94")]
	public virtual MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x54DA070", Offset = "0x54D9070", VA = "0x54DA070", Slot = "95")]
	public virtual MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B10")]
	public abstract MemberInfo[] GetMembers(BindingFlags bindingAttr);

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x54DA0C0", Offset = "0x54D90C0", VA = "0x54DA0C0", Slot = "97")]
	public MethodInfo GetMethod(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x54DA140", Offset = "0x54D9140", VA = "0x54DA140", Slot = "98")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x54DA1B0", Offset = "0x54D91B0", VA = "0x54DA1B0", Slot = "99")]
	public MethodInfo GetMethod(string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x54DA1E0", Offset = "0x54D91E0", VA = "0x54DA1E0", Slot = "100")]
	public MethodInfo GetMethod(string name, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x54DA210", Offset = "0x54D9210", VA = "0x54DA210", Slot = "101")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x54DA230", Offset = "0x54D9230", VA = "0x54DA230", Slot = "102")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B17")]
	protected abstract MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x54DA360", Offset = "0x54D9360", VA = "0x54DA360", Slot = "104")]
	public MethodInfo[] GetMethods()
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	public abstract MethodInfo[] GetMethods(BindingFlags bindingAttr);

	[Token(Token = "0x6000B1A")]
	public abstract Type GetNestedType(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x54DA380", Offset = "0x54D9380", VA = "0x54DA380", Slot = "107")]
	public PropertyInfo GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x54DA400", Offset = "0x54D9400", VA = "0x54DA400", Slot = "108")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x54DA470", Offset = "0x54D9470", VA = "0x54DA470", Slot = "109")]
	public PropertyInfo GetProperty(string name, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x54DA540", Offset = "0x54D9540", VA = "0x54DA540", Slot = "110")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x54DA570", Offset = "0x54D9570", VA = "0x54DA570", Slot = "111")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x54DA5A0", Offset = "0x54D95A0", VA = "0x54DA5A0", Slot = "112")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	protected abstract PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x54DA630", Offset = "0x54D9630", VA = "0x54DA630", Slot = "114")]
	public PropertyInfo[] GetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	public abstract PropertyInfo[] GetProperties(BindingFlags bindingAttr);

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x54DA690", Offset = "0x54D9690", VA = "0x54DA690")]
	public static RuntimeTypeHandle GetTypeHandle(object o)
	{
		return default(RuntimeTypeHandle);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x54DA710", Offset = "0x54D9710", VA = "0x54DA710")]
	public static TypeCode GetTypeCode(Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x54DA760", Offset = "0x54D9760", VA = "0x54DA760", Slot = "117")]
	protected virtual TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B29")]
	public abstract object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters);

	[Token(Token = "0x6000B2A")]
	public abstract Type[] GetInterfaces();

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x54DA870", Offset = "0x54D9870", VA = "0x54DA870", Slot = "121")]
	public virtual bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x54DA8B0", Offset = "0x54D98B0", VA = "0x54DA8B0", Slot = "122")]
	public virtual bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x54DA8F0", Offset = "0x54D98F0", VA = "0x54DA8F0", Slot = "123")]
	public virtual Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x54DA9E0", Offset = "0x54D99E0", VA = "0x54DA9E0", Slot = "124")]
	public virtual Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x54DAA60", Offset = "0x54D9A60", VA = "0x54DAA60", Slot = "125")]
	public virtual Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x54DAAA0", Offset = "0x54D9AA0", VA = "0x54DAAA0", Slot = "126")]
	public virtual Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x54DAAE0", Offset = "0x54D9AE0", VA = "0x54DAAE0", Slot = "127")]
	public virtual Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x54DAB20", Offset = "0x54D9B20", VA = "0x54DAB20", Slot = "128")]
	public virtual Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x54DAB70", Offset = "0x54D9B70", VA = "0x54DAB70", Slot = "129")]
	public virtual Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x54DABB0", Offset = "0x54D9BB0", VA = "0x54DABB0")]
	public static Type MakeGenericSignatureType(Type genericTypeDefinition, params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x54DAC10", Offset = "0x54D9C10", VA = "0x54DAC10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x54DAC60", Offset = "0x54D9C60", VA = "0x54DAC60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x54DACC0", Offset = "0x54D9CC0", VA = "0x54DACC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x54DAD10", Offset = "0x54D9D10", VA = "0x54DAD10", Slot = "130")]
	public virtual bool Equals(Type o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x54CC520", Offset = "0x54CB520", VA = "0x54CC520")]
	public static Type GetTypeFromHandle(RuntimeTypeHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x54DAE80", Offset = "0x54D9E80", VA = "0x54DAE80")]
	private static extern Type internal_from_handle(IntPtr handle);

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x54DAEA0", Offset = "0x54D9EA0", VA = "0x54DAEA0")]
	internal string FormatTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x54DAEC0", Offset = "0x54D9EC0", VA = "0x54DAEC0", Slot = "132")]
	internal virtual string FormatTypeName(bool serialization)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x54DAF00", Offset = "0x54D9F00", VA = "0x54DAF00")]
	public static Type GetType(string typeName, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x54DAF70", Offset = "0x54D9F70", VA = "0x54DAF70")]
	public static Type GetType(string typeName, bool throwOnError)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x54DAFE0", Offset = "0x54D9FE0", VA = "0x54DAFE0")]
	public static Type GetType(string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x54DB040", Offset = "0x54DA040", VA = "0x54DB040")]
	public static Type GetType(string typeName, Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x54D7600", Offset = "0x54D6600", VA = "0x54D7600")]
	public static bool operator ==(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x54D86B0", Offset = "0x54D76B0", VA = "0x54D86B0")]
	public static bool operator !=(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x54D8640", Offset = "0x54D7640", VA = "0x54D8640")]
	internal bool IsRuntimeImplemented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x54DB190", Offset = "0x54DA190", VA = "0x54DB190", Slot = "134")]
	internal virtual string InternalGetNameIfAvailable(ref Type rootCauseForFailure)
	{
		return null;
	}
}
