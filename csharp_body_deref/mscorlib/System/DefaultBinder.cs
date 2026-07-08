using System.Globalization;
using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200015B")]
internal class DefaultBinder : Binder
{
	[Token(Token = "0x200015C")]
	internal class BinderState
	{
		[Token(Token = "0x4000528")]
		[FieldOffset(Offset = "0x10")]
		internal int[] m_argsMap;

		[Token(Token = "0x4000529")]
		[FieldOffset(Offset = "0x18")]
		internal int m_originalSize;

		[Token(Token = "0x400052A")]
		[FieldOffset(Offset = "0x1C")]
		internal bool m_isParamArray;

		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x5007D40", Offset = "0x5007D40", VA = "0x5007D40")]
		internal BinderState(int[] argsMap, int originalSize, bool isParamArray)
		{
		}
	}

	[Token(Token = "0x200015D")]
	[Flags]
	private enum Primitives
	{
		[Token(Token = "0x400052C")]
		Boolean = 8,
		[Token(Token = "0x400052D")]
		Char = 0x10,
		[Token(Token = "0x400052E")]
		SByte = 0x20,
		[Token(Token = "0x400052F")]
		Byte = 0x40,
		[Token(Token = "0x4000530")]
		Int16 = 0x80,
		[Token(Token = "0x4000531")]
		UInt16 = 0x100,
		[Token(Token = "0x4000532")]
		Int32 = 0x200,
		[Token(Token = "0x4000533")]
		UInt32 = 0x400,
		[Token(Token = "0x4000534")]
		Int64 = 0x800,
		[Token(Token = "0x4000535")]
		UInt64 = 0x1000,
		[Token(Token = "0x4000536")]
		Single = 0x2000,
		[Token(Token = "0x4000537")]
		Double = 0x4000,
		[Token(Token = "0x4000538")]
		Decimal = 0x8000,
		[Token(Token = "0x4000539")]
		DateTime = 0x10000,
		[Token(Token = "0x400053A")]
		String = 0x40000
	}

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x0")]
	private static Primitives[] _primitiveConversions;

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x50052A0", Offset = "0x50052A0", VA = "0x50052A0", Slot = "5")]
	public override MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo cultureInfo, string[] names, out object state)
	{
		return null;
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x5008130", Offset = "0x5008130", VA = "0x5008130", Slot = "4")]
	public override FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x5008830", Offset = "0x5008830", VA = "0x5008830", Slot = "9")]
	public override PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x500A040", Offset = "0x500A040", VA = "0x500A040", Slot = "6")]
	public override object ChangeType(object value, Type type, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x500A0A0", Offset = "0x500A0A0", VA = "0x500A0A0", Slot = "7")]
	public override void ReorderArgumentArray(ref object[] args, object state)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x500A3F0", Offset = "0x500A3F0", VA = "0x500A3F0")]
	public static MethodBase ExactBinding(MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x500A8B0", Offset = "0x500A8B0", VA = "0x500A8B0")]
	public static PropertyInfo ExactPropertyBinding(PropertyInfo[] match, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x5009990", Offset = "0x5009990", VA = "0x5009990")]
	private static int FindMostSpecific(ParameterInfo[] p1, int[] paramOrder1, Type paramArrayType1, ParameterInfo[] p2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x5009600", Offset = "0x5009600", VA = "0x5009600")]
	private static int FindMostSpecificType(Type c1, Type c2, Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x5007EF0", Offset = "0x5007EF0", VA = "0x5007EF0")]
	private static int FindMostSpecificMethod(MethodBase m1, int[] paramOrder1, Type paramArrayType1, MethodBase m2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x5008680", Offset = "0x5008680", VA = "0x5008680")]
	private static int FindMostSpecificField(FieldInfo cur1, FieldInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x5009E90", Offset = "0x5009E90", VA = "0x5009E90")]
	private static int FindMostSpecificProperty(PropertyInfo cur1, PropertyInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x500AC00", Offset = "0x500AC00", VA = "0x500AC00")]
	internal static bool CompareMethodSigAndName(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x500AD50", Offset = "0x500AD50", VA = "0x500AD50")]
	internal static int GetHierarchyDepth(Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x500A6C0", Offset = "0x500A6C0", VA = "0x500A6C0")]
	internal static MethodBase FindMostDerivedNewSlotMeth(MethodBase[] match, int cMatches)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x5007D80", Offset = "0x5007D80", VA = "0x5007D80")]
	private static void ReorderParams(int[] paramOrder, object[] vars)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x50079C0", Offset = "0x50079C0", VA = "0x50079C0")]
	private static bool CreateParamOrder(int[] paramOrder, ParameterInfo[] pars, string[] names)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x5009410", Offset = "0x5009410", VA = "0x5009410")]
	private static bool CanConvertPrimitive(System.RuntimeType source, System.RuntimeType target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x5007C50", Offset = "0x5007C50", VA = "0x5007C50")]
	private static bool CanConvertPrimitiveObjectToType(object source, System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x500ADD0", Offset = "0x500ADD0", VA = "0x500ADD0")]
	internal static bool CompareMethodSig(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x500AF20", Offset = "0x500AF20", VA = "0x500AF20", Slot = "8")]
	public sealed override MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x500B7E0", Offset = "0x500B7E0", VA = "0x500B7E0")]
	private static bool CanChangePrimitive(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x500B830", Offset = "0x500B830", VA = "0x500B830")]
	private static bool CanPrimitiveWiden(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x500B8E0", Offset = "0x500B8E0", VA = "0x500B8E0")]
	public DefaultBinder()
	{
	}
}
