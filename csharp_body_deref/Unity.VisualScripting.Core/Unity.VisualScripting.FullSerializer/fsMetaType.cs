// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsMetaType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F7")]
public class fsMetaType
{
	[Token(Token = "0x4000976")]
	[FieldOffset(Offset = "0x10")]
	public Type ReflectedType;

	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x18")]
	private bool _hasEmittedAotData;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x19")]
	private bool? _hasDefaultConstructorCache;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x1B")]
	private bool _isDefaultConstructorPublic;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<fsConfig, Dictionary<Type, fsMetaType>> _configMetaTypes;

	[Token(Token = "0x17000203")]
	public fsMetaProperty[] Properties
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x6861990", Offset = "0x6860990", VA = "0x6861990")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x68619A0", Offset = "0x68609A0", VA = "0x68619A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public bool HasDefaultConstructor
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x68619B0", Offset = "0x68609B0", VA = "0x68619B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x68611E0", Offset = "0x68601E0", VA = "0x68611E0")]
	private fsMetaType(fsConfig config, Type reflectedType)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x685FDC0", Offset = "0x685EDC0", VA = "0x685FDC0")]
	public bool EmitAotData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x6857640", Offset = "0x6856640", VA = "0x6857640")]
	public object CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x6857390", Offset = "0x6856390", VA = "0x6857390")]
	public static fsMetaType Get(fsConfig config, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x6861CF0", Offset = "0x6860CF0", VA = "0x6861CF0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x68612E0", Offset = "0x68602E0", VA = "0x68612E0")]
	private static void CollectProperties(fsConfig config, List<fsMetaProperty> properties, Type reflectedType)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x68623A0", Offset = "0x68613A0", VA = "0x68623A0")]
	private static bool IsAutoProperty(PropertyInfo property, MemberInfo[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x6861E70", Offset = "0x6860E70", VA = "0x6861E70")]
	private static bool CanSerializeProperty(fsConfig config, PropertyInfo property, MemberInfo[] members, bool annotationFreeValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x6862190", Offset = "0x6861190", VA = "0x6862190")]
	private static bool CanSerializeField(fsConfig config, FieldInfo field, bool annotationFreeValue)
	{
		return default(bool);
	}
}
