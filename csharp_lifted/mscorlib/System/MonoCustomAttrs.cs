// ==================== AoTTG2 cross-reference ====================
// Type: System.MonoCustomAttrs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000195")]
internal static class MonoCustomAttrs
{
	[Token(Token = "0x2000196")]
	private class AttributeInfo
	{
		[Token(Token = "0x4000675")]
		[FieldOffset(Offset = "0x10")]
		private AttributeUsageAttribute _usage;

		[Token(Token = "0x4000676")]
		[FieldOffset(Offset = "0x18")]
		private int _inheritanceLevel;

		[Token(Token = "0x17000170")]
		public AttributeUsageAttribute Usage
		{
			[Token(Token = "0x6000FF6")]
			[Address(RVA = "0x5514BC0", Offset = "0x5513BC0", VA = "0x5514BC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000171")]
		public int InheritanceLevel
		{
			[Token(Token = "0x6000FF7")]
			[Address(RVA = "0x5514BD0", Offset = "0x5513BD0", VA = "0x5514BD0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x5512120", Offset = "0x5511120", VA = "0x5512120")]
		public AttributeInfo(AttributeUsageAttribute usage, int inheritanceLevel)
		{
		}
	}

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x0")]
	private static Assembly corlib;

	[Token(Token = "0x4000673")]
	[ThreadStatic]
	private static Dictionary<Type, AttributeUsageAttribute> usage_cache;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AttributeUsageAttribute DefaultAttributeUsage;

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x5510680", Offset = "0x550F680", VA = "0x5510680")]
	private static bool IsUserCattrProvider(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x5510840", Offset = "0x550F840", VA = "0x5510840")]
	internal static extern Attribute[] GetCustomAttributesInternal(ICustomAttributeProvider obj, Type attributeType, bool pseudoAttrs);

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x5510850", Offset = "0x550F850", VA = "0x5510850")]
	internal static object[] GetPseudoCustomAttributes(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x5510BC0", Offset = "0x550FBC0", VA = "0x5510BC0")]
	private static object[] GetPseudoCustomAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x5510D70", Offset = "0x550FD70", VA = "0x5510D70")]
	internal static object[] GetCustomAttributesBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x5510F50", Offset = "0x550FF50", VA = "0x5510F50")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x5512140", Offset = "0x5511140", VA = "0x5512140")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x55122B0", Offset = "0x55112B0", VA = "0x55122B0")]
	private static extern CustomAttributeData[] GetCustomAttributesDataInternal(ICustomAttributeProvider obj);

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x55122C0", Offset = "0x55112C0", VA = "0x55122C0")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, bool inherit = false)
	{
		return null;
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x5512610", Offset = "0x5511610", VA = "0x5512610")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x55123D0", Offset = "0x55113D0", VA = "0x55123D0")]
	internal static IList<CustomAttributeData> GetCustomAttributesDataBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x5513B10", Offset = "0x5512B10", VA = "0x5513B10")]
	internal static CustomAttributeData[] GetPseudoCustomAttributesData(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x5513E80", Offset = "0x5512E80", VA = "0x5513E80")]
	private static CustomAttributeData[] GetPseudoCustomAttributesData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x55140F0", Offset = "0x55130F0", VA = "0x55140F0")]
	internal static bool IsDefined(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x55143C0", Offset = "0x55133C0", VA = "0x55143C0")]
	internal static extern bool IsDefinedInternal(ICustomAttributeProvider obj, Type AttributeType);

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x55143D0", Offset = "0x55133D0", VA = "0x55143D0")]
	private static PropertyInfo GetBasePropertyDefinition(System.Reflection.RuntimePropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x5514700", Offset = "0x5513700", VA = "0x5514700")]
	private static EventInfo GetBaseEventDefinition(System.Reflection.RuntimeEventInfo evt)
	{
		return null;
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x5511BF0", Offset = "0x5510BF0", VA = "0x5511BF0")]
	private static ICustomAttributeProvider GetBase(ICustomAttributeProvider obj)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x5514910", Offset = "0x5513910", VA = "0x5514910")]
	private static AttributeUsageAttribute RetrieveAttributeUsageNoCache(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x5511F70", Offset = "0x5510F70", VA = "0x5511F70")]
	private static AttributeUsageAttribute RetrieveAttributeUsage(Type attributeType)
	{
		return null;
	}
}
