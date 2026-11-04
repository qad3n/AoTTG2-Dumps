// ==================== AoTTG2 cross-reference ====================
// Type: System.Type
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000147")]
public abstract class Type : MemberInfo
{
	[Token(Token = "0x4000460")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Binder s_defaultBinder;

	[Token(Token = "0x4000461")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char Delimiter;

	[Token(Token = "0x4000462")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly Type[] EmptyTypes;

	[Token(Token = "0x4000463")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly object Missing;

	[Token(Token = "0x4000464")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly MemberFilter FilterAttribute;

	[Token(Token = "0x4000465")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly MemberFilter FilterName;

	[Token(Token = "0x4000466")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly MemberFilter FilterNameIgnoreCase;

	[Token(Token = "0x4000467")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal RuntimeTypeHandle _impl;

	[Token(Token = "0x170000C6")]
	public virtual bool IsSerializable
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x1B54C50", Offset = "0x1B53250", VA = "0x181B54C50", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x1B54370", Offset = "0x1B52970", VA = "0x181B54370", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public bool IsVisible
	{
		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x1B54E60", Offset = "0x1B53460", VA = "0x181B54E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C9")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x846F70", Offset = "0x845570", VA = "0x180846F70", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170000CA")]
	public abstract string Namespace
	{
		[Token(Token = "0x6000AE8")]
		get;
	}

	[Token(Token = "0x170000CB")]
	public abstract string AssemblyQualifiedName
	{
		[Token(Token = "0x6000AE9")]
		get;
	}

	[Token(Token = "0x170000CC")]
	public abstract string FullName
	{
		[Token(Token = "0x6000AEA")]
		get;
	}

	[Token(Token = "0x170000CD")]
	public abstract Assembly Assembly
	{
		[Token(Token = "0x6000AEB")]
		get;
	}

	[Token(Token = "0x170000CE")]
	public new abstract Module Module
	{
		[Token(Token = "0x6000AEC")]
		get;
	}

	[Token(Token = "0x170000CF")]
	public bool IsNested
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x1B54B30", Offset = "0x1B53130", VA = "0x181B54B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual MethodBase DeclaringMethod
	{
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public abstract Type UnderlyingSystemType
	{
		[Token(Token = "0x6000AF1")]
		get;
	}

	[Token(Token = "0x170000D4")]
	public bool IsArray
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x1B547C0", Offset = "0x1B52DC0", VA = "0x181B547C0", Slot = "31")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D5")]
	public bool IsByRef
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0xA36E60", Offset = "0xA35460", VA = "0x180A36E60", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public bool IsPointer
	{
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x1B54B90", Offset = "0x1B53190", VA = "0x181B54B90", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	public virtual bool IsConstructedGenericType
	{
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x1B54880", Offset = "0x1B52E80", VA = "0x181B54880", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	public virtual bool IsGenericParameter
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public virtual bool IsGenericMethodParameter
	{
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x1B54970", Offset = "0x1B52F70", VA = "0x181B54970", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DA")]
	public virtual bool IsGenericType
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	public virtual bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	public virtual bool IsSZArray
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x1B54BF0", Offset = "0x1B531F0", VA = "0x181B54BF0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	public virtual bool IsVariableBoundArray
	{
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x1B54E10", Offset = "0x1B53410", VA = "0x181B54E10", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	public virtual bool IsByRefLike
	{
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x1B547E0", Offset = "0x1B52DE0", VA = "0x181B547E0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public bool HasElementType
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x1B54740", Offset = "0x1B52D40", VA = "0x181B54740", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E0")]
	public virtual Type[] GenericTypeArguments
	{
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x1B546C0", Offset = "0x1B52CC0", VA = "0x181B546C0", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public virtual int GenericParameterPosition
	{
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x1B54670", Offset = "0x1B52C70", VA = "0x181B54670", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public virtual GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x1B54630", Offset = "0x1B52C30", VA = "0x181B54630", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x170000E3")]
	public TypeAttributes Attributes
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x1B54350", Offset = "0x1B52950", VA = "0x181B54350", Slot = "55")]
		get
		{
			return default(TypeAttributes);
		}
	}

	[Token(Token = "0x170000E4")]
	public bool IsAbstract
	{
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x1B54790", Offset = "0x1B52D90", VA = "0x181B54790", Slot = "57")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public bool IsSealed
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x1B54C20", Offset = "0x1B53220", VA = "0x181B54C20", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x1B54DC0", Offset = "0x1B533C0", VA = "0x181B54DC0", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public bool IsClass
	{
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x1B54830", Offset = "0x1B52E30", VA = "0x181B54830", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IsNestedAssembly
	{
		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x1B54AB0", Offset = "0x1B530B0", VA = "0x181B54AB0", Slot = "61")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IsNestedPrivate
	{
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x1B54AE0", Offset = "0x1B530E0", VA = "0x181B54AE0", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IsNestedPublic
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x1B54B10", Offset = "0x1B53110", VA = "0x181B54B10", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IsNotPublic
	{
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x1B54B70", Offset = "0x1B53170", VA = "0x181B54B70", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool IsPublic
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x1B54BD0", Offset = "0x1B531D0", VA = "0x181B54BD0", Slot = "65")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool IsExplicitLayout
	{
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x1B54950", Offset = "0x1B52F50", VA = "0x181B54950", Slot = "66")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	public bool IsCOMObject
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x12B3640", Offset = "0x12B1C40", VA = "0x1812B3640", Slot = "67")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public bool IsContextful
	{
		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x1B548B0", Offset = "0x1B52EB0", VA = "0x181B548B0", Slot = "69")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual bool IsCollectible
	{
		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F1")]
	public virtual bool IsEnum
	{
		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x1B548D0", Offset = "0x1B52ED0", VA = "0x181B548D0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public bool IsMarshalByRef
	{
		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x1B54A90", Offset = "0x1B53090", VA = "0x181B54A90", Slot = "73")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public bool IsPrimitive
	{
		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x1B54BB0", Offset = "0x1B531B0", VA = "0x181B54BB0", Slot = "75")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	public bool IsValueType
	{
		[Token(Token = "0x6000B20")]
		[Address(RVA = "0x1B54DF0", Offset = "0x1B533F0", VA = "0x181B54DF0", Slot = "77")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	public virtual bool IsSignatureType
	{
		[Token(Token = "0x6000B22")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "79")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	public virtual RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x1B55070", Offset = "0x1B53670", VA = "0x181B55070", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x170000F7")]
	public abstract Type BaseType
	{
		[Token(Token = "0x6000B4B")]
		get;
	}

	[Token(Token = "0x170000F8")]
	public static Binder DefaultBinder
	{
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x1B544C0", Offset = "0x1B52AC0", VA = "0x181B544C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	internal virtual bool IsSzArray
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	public bool IsInterface
	{
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x1B549C0", Offset = "0x1B52FC0", VA = "0x181B549C0", Slot = "133")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal string FullNameOrDefault
	{
		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x1B545A0", Offset = "0x1B52BA0", VA = "0x181B545A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	internal string InternalNameIfAvailable
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x1B54760", Offset = "0x1B52D60", VA = "0x181B54760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	internal string NameOrDefault
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x1B55010", Offset = "0x1B53610", VA = "0x181B55010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x1B53490", Offset = "0x1B51A90", VA = "0x181B53490", Slot = "16")]
	public virtual bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x1B516D0", Offset = "0x1B4FCD0", VA = "0x181B516D0", Slot = "17")]
	public virtual string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x1B51A60", Offset = "0x1B50060", VA = "0x181B51A60", Slot = "18")]
	public virtual string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x1B51B10", Offset = "0x1B50110", VA = "0x181B51B10")]
	private Array GetEnumRawConstantValues()
	{
		return null;
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x1B51300", Offset = "0x1B4F900", VA = "0x181B51300")]
	private void GetEnumData(out string[] enumNames, out Array enumValues)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x1B504F0", Offset = "0x1B4EAF0", VA = "0x181B504F0")]
	private static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x1B53A80", Offset = "0x1B52080", VA = "0x181B53A80")]
	internal static bool IsIntegerType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x1B52CD0", Offset = "0x1B512D0", VA = "0x181B52CD0")]
	internal Type GetRootElementType()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x1B53E30", Offset = "0x1B52430", VA = "0x181B53E30", Slot = "21")]
	[ComVisible(true)]
	public virtual bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x1B53250", Offset = "0x1B51850", VA = "0x181B53250", Slot = "22")]
	public virtual bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x1B53100", Offset = "0x1B51700", VA = "0x181B53100")]
	internal bool ImplementInterface(Type ifaceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x1B50760", Offset = "0x1B4ED60", VA = "0x181B50760")]
	private static bool FilterAttributeImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x1B50C90", Offset = "0x1B4F290", VA = "0x181B50C90")]
	private static bool FilterNameImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x1B50AE0", Offset = "0x1B4F0E0", VA = "0x181B50AE0")]
	private static bool FilterNameIgnoreCaseImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected Type()
	{
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x1B530C0", Offset = "0x1B516C0", VA = "0x181B530C0", Slot = "23")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000AF3")]
	protected abstract bool IsArrayImpl();

	[Token(Token = "0x6000AF5")]
	protected abstract bool IsByRefImpl();

	[Token(Token = "0x6000AF7")]
	protected abstract bool IsPointerImpl();

	[Token(Token = "0x6000B01")]
	protected abstract bool HasElementTypeImpl();

	[Token(Token = "0x6000B02")]
	public abstract Type GetElementType();

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x1B50E90", Offset = "0x1B4F490", VA = "0x181B50E90", Slot = "48")]
	public virtual int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x1B51E70", Offset = "0x1B50470", VA = "0x181B51E70", Slot = "49")]
	public virtual Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x1B51D80", Offset = "0x1B50380", VA = "0x181B51D80", Slot = "51")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x1B51DD0", Offset = "0x1B503D0", VA = "0x181B51DD0", Slot = "54")]
	public virtual Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000B0B")]
	protected abstract TypeAttributes GetAttributeFlagsImpl();

	[Token(Token = "0x6000B17")]
	protected abstract bool IsCOMObjectImpl();

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x1B533F0", Offset = "0x1B519F0", VA = "0x181B533F0", Slot = "70")]
	protected virtual bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x1B53D00", Offset = "0x1B52300", VA = "0x181B53D00", Slot = "74")]
	protected virtual bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1F")]
	protected abstract bool IsPrimitiveImpl();

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x1B53ED0", Offset = "0x1B524D0", VA = "0x181B53ED0", Slot = "78")]
	protected virtual bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x1B51190", Offset = "0x1B4F790", VA = "0x181B51190", Slot = "80")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x1B50EE0", Offset = "0x1B4F4E0", VA = "0x181B50EE0", Slot = "81")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x1B51040", Offset = "0x1B4F640", VA = "0x181B51040", Slot = "82")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	protected abstract ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x1B512E0", Offset = "0x1B4F8E0", VA = "0x181B512E0", Slot = "84")]
	[ComVisible(true)]
	public ConstructorInfo[] GetConstructors()
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[ComVisible(true)]
	public abstract ConstructorInfo[] GetConstructors(BindingFlags bindingAttr);

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x1B51D20", Offset = "0x1B50320", VA = "0x181B51D20", Slot = "86")]
	public EventInfo GetEvent(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	public abstract EventInfo GetEvent(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B2B")]
	public abstract EventInfo[] GetEvents(BindingFlags bindingAttr);

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x1B51D40", Offset = "0x1B50340", VA = "0x181B51D40", Slot = "89")]
	public FieldInfo GetField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	public abstract FieldInfo GetField(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x1B51D60", Offset = "0x1B50360", VA = "0x181B51D60", Slot = "91")]
	public FieldInfo[] GetFields()
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	public abstract FieldInfo[] GetFields(BindingFlags bindingAttr);

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x1B51F50", Offset = "0x1B50550", VA = "0x181B51F50", Slot = "93")]
	public MemberInfo[] GetMember(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x1B51F20", Offset = "0x1B50520", VA = "0x181B51F20", Slot = "94")]
	public virtual MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x1B51F70", Offset = "0x1B50570", VA = "0x181B51F70", Slot = "95")]
	public virtual MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	public abstract MemberInfo[] GetMembers(BindingFlags bindingAttr);

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x1B52170", Offset = "0x1B50770", VA = "0x181B52170", Slot = "97")]
	public MethodInfo GetMethod(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x1B52210", Offset = "0x1B50810", VA = "0x181B52210", Slot = "98")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x1B522A0", Offset = "0x1B508A0", VA = "0x181B522A0", Slot = "99")]
	public MethodInfo GetMethod(string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x1B51FC0", Offset = "0x1B505C0", VA = "0x181B51FC0", Slot = "100")]
	public MethodInfo GetMethod(string name, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x1B52600", Offset = "0x1B50C00", VA = "0x181B52600", Slot = "101")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x1B52430", Offset = "0x1B50A30", VA = "0x181B52430", Slot = "102")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	protected abstract MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x1B527C0", Offset = "0x1B50DC0", VA = "0x181B527C0", Slot = "104")]
	public MethodInfo[] GetMethods()
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	public abstract MethodInfo[] GetMethods(BindingFlags bindingAttr);

	[Token(Token = "0x6000B3D")]
	public abstract Type GetNestedType(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x1B52B20", Offset = "0x1B51120", VA = "0x181B52B20", Slot = "107")]
	public PropertyInfo GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x1B52A90", Offset = "0x1B51090", VA = "0x181B52A90", Slot = "108")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x1B52BB0", Offset = "0x1B511B0", VA = "0x181B52BB0", Slot = "109")]
	public PropertyInfo GetProperty(string name, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x1B528E0", Offset = "0x1B50EE0", VA = "0x181B528E0", Slot = "110")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x1B52800", Offset = "0x1B50E00", VA = "0x181B52800", Slot = "111")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x1B529C0", Offset = "0x1B50FC0", VA = "0x181B529C0", Slot = "112")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	protected abstract PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x1B527E0", Offset = "0x1B50DE0", VA = "0x181B527E0", Slot = "114")]
	public PropertyInfo[] GetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	public abstract PropertyInfo[] GetProperties(BindingFlags bindingAttr);

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x1B52EB0", Offset = "0x1B514B0", VA = "0x181B52EB0")]
	public static RuntimeTypeHandle GetTypeHandle(object o)
	{
		return default(RuntimeTypeHandle);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x1B52E20", Offset = "0x1B51420", VA = "0x181B52E20")]
	public static TypeCode GetTypeCode(Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x1B52D30", Offset = "0x1B51330", VA = "0x181B52D30", Slot = "117")]
	protected virtual TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B4C")]
	public abstract object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters);

	[Token(Token = "0x6000B4D")]
	public abstract Type[] GetInterfaces();

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x1B53A40", Offset = "0x1B52040", VA = "0x181B53A40", Slot = "121")]
	public virtual bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x1B53A00", Offset = "0x1B52000", VA = "0x181B53A00", Slot = "122")]
	public virtual bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x1B51B40", Offset = "0x1B50140", VA = "0x181B51B40", Slot = "123")]
	public virtual Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x1B51C80", Offset = "0x1B50280", VA = "0x181B51C80", Slot = "124")]
	public virtual Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x1B53F50", Offset = "0x1B52550", VA = "0x181B53F50", Slot = "125")]
	public virtual Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x1B53F90", Offset = "0x1B52590", VA = "0x181B53F90", Slot = "126")]
	public virtual Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x1B53FD0", Offset = "0x1B525D0", VA = "0x181B53FD0", Slot = "127")]
	public virtual Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x1B54080", Offset = "0x1B52680", VA = "0x181B54080", Slot = "128")]
	public virtual Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x1B540D0", Offset = "0x1B526D0", VA = "0x181B540D0", Slot = "129")]
	public virtual Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x1B54010", Offset = "0x1B52610", VA = "0x181B54010")]
	public static Type MakeGenericSignatureType(Type genericTypeDefinition, params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x1B54110", Offset = "0x1B52710", VA = "0x181B54110", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x1B50700", Offset = "0x1B4ED00", VA = "0x181B50700", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x1B51EC0", Offset = "0x1B504C0", VA = "0x181B51EC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x1B50680", Offset = "0x1B4EC80", VA = "0x181B50680", Slot = "130")]
	public virtual bool Equals(Type o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x1B52E70", Offset = "0x1B51470", VA = "0x181B52E70")]
	public static Type GetTypeFromHandle(RuntimeTypeHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x1B550B0", Offset = "0x1B536B0", VA = "0x181B550B0")]
	private static extern Type internal_from_handle(IntPtr handle);

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x1B50E70", Offset = "0x1B4F470", VA = "0x181B50E70")]
	internal string FormatTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x1B50E30", Offset = "0x1B4F430", VA = "0x181B50E30", Slot = "132")]
	internal virtual string FormatTypeName(bool serialization)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x1B53030", Offset = "0x1B51630", VA = "0x181B53030")]
	public static Type GetType(string typeName, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x1B52F40", Offset = "0x1B51540", VA = "0x181B52F40")]
	public static Type GetType(string typeName, bool throwOnError)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x1B52FC0", Offset = "0x1B515C0", VA = "0x181B52FC0")]
	public static Type GetType(string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x1B530D0", Offset = "0x1B516D0", VA = "0x181B530D0")]
	public static Type GetType(string typeName, Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x1B53DA0", Offset = "0x1B523A0", VA = "0x181B53DA0")]
	internal bool IsRuntimeImplemented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x1B53230", Offset = "0x1B51830", VA = "0x181B53230", Slot = "134")]
	internal virtual string InternalGetNameIfAvailable(ref Type rootCauseForFailure)
	{
		return null;
	}
}
