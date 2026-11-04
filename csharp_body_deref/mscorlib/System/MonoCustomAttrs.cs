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

[Token(Token = "0x20001BD")]
internal static class MonoCustomAttrs
{
	[Token(Token = "0x20001BE")]
	private class AttributeInfo
	{
		[Token(Token = "0x4000717")]
		[FieldOffset(Offset = "0x10")]
		private AttributeUsageAttribute _usage;

		[Token(Token = "0x4000718")]
		[FieldOffset(Offset = "0x18")]
		private int _inheritanceLevel;

		[Token(Token = "0x17000171")]
		public AttributeUsageAttribute Usage
		{
			[Token(Token = "0x600101F")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000172")]
		public int InheritanceLevel
		{
			[Token(Token = "0x6001020")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600101E")]
		[Address(RVA = "0x1B7BED0", Offset = "0x1B7A4D0", VA = "0x181B7BED0")]
		public AttributeInfo(AttributeUsageAttribute usage, int inheritanceLevel)
		{
		}
	}

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x0")]
	private static Assembly corlib;

	[Token(Token = "0x4000715")]
	[ThreadStatic]
	private static Dictionary<Type, AttributeUsageAttribute> usage_cache;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AttributeUsageAttribute DefaultAttributeUsage;

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x1B86170", Offset = "0x1B84770", VA = "0x181B86170")]
	private static bool IsUserCattrProvider(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x1B84810", Offset = "0x1B82E10", VA = "0x181B84810")]
	internal static extern Attribute[] GetCustomAttributesInternal(ICustomAttributeProvider obj, Type attributeType, bool pseudoAttrs);

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x1B85BC0", Offset = "0x1B841C0", VA = "0x181B85BC0")]
	internal static object[] GetPseudoCustomAttributes(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x1B85A20", Offset = "0x1B84020", VA = "0x181B85A20")]
	private static object[] GetPseudoCustomAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x1B83640", Offset = "0x1B81C40", VA = "0x181B83640")]
	internal static object[] GetCustomAttributesBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x1B84820", Offset = "0x1B82E20", VA = "0x181B84820")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x1B85350", Offset = "0x1B83950", VA = "0x181B85350")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x1B83990", Offset = "0x1B81F90", VA = "0x181B83990")]
	private static extern CustomAttributeData[] GetCustomAttributesDataInternal(ICustomAttributeProvider obj);

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x1B846E0", Offset = "0x1B82CE0", VA = "0x181B846E0")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, bool inherit = false)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x1B839A0", Offset = "0x1B81FA0", VA = "0x181B839A0")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x1B83820", Offset = "0x1B81E20", VA = "0x181B83820")]
	internal static IList<CustomAttributeData> GetCustomAttributesDataBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x1B854D0", Offset = "0x1B83AD0", VA = "0x181B854D0")]
	internal static CustomAttributeData[] GetPseudoCustomAttributesData(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x1B857B0", Offset = "0x1B83DB0", VA = "0x181B857B0")]
	private static CustomAttributeData[] GetPseudoCustomAttributesData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x1B85EA0", Offset = "0x1B844A0", VA = "0x181B85EA0")]
	internal static bool IsDefined(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x1B85E90", Offset = "0x1B84490", VA = "0x181B85E90")]
	internal static extern bool IsDefinedInternal(ICustomAttributeProvider obj, Type AttributeType);

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x1B82EA0", Offset = "0x1B814A0", VA = "0x181B82EA0")]
	private static PropertyInfo GetBasePropertyDefinition(System.Reflection.RuntimePropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x1B82C70", Offset = "0x1B81270", VA = "0x181B82C70")]
	private static EventInfo GetBaseEventDefinition(System.Reflection.RuntimeEventInfo evt)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x1B831C0", Offset = "0x1B817C0", VA = "0x181B831C0")]
	private static ICustomAttributeProvider GetBase(ICustomAttributeProvider obj)
	{
		return null;
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x1B86370", Offset = "0x1B84970", VA = "0x181B86370")]
	private static AttributeUsageAttribute RetrieveAttributeUsageNoCache(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x1B865D0", Offset = "0x1B84BD0", VA = "0x181B865D0")]
	private static AttributeUsageAttribute RetrieveAttributeUsage(Type attributeType)
	{
		return null;
	}
}
