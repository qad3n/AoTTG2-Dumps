using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F7")]
public class fsMetaType
{
	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x10")]
	public Type ReflectedType;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x18")]
	private bool _hasEmittedAotData;

	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x19")]
	private bool? _hasDefaultConstructorCache;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x1B")]
	private bool _isDefaultConstructorPublic;

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<fsConfig, Dictionary<Type, fsMetaType>> _configMetaTypes;

	[Token(Token = "0x17000200")]
	public fsMetaProperty[] Properties
	{
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x4A53230", Offset = "0x4A53230", VA = "0x4A53230")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001206")]
		[Address(RVA = "0x4A53240", Offset = "0x4A53240", VA = "0x4A53240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000201")]
	public bool HasDefaultConstructor
	{
		[Token(Token = "0x6001207")]
		[Address(RVA = "0x4A53250", Offset = "0x4A53250", VA = "0x4A53250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x4A52B10", Offset = "0x4A52B10", VA = "0x4A52B10")]
	private fsMetaType(fsConfig config, Type reflectedType)
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x4A516E0", Offset = "0x4A516E0", VA = "0x4A516E0")]
	public bool EmitAotData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x4A48B30", Offset = "0x4A48B30", VA = "0x4A48B30")]
	public object CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x4A48830", Offset = "0x4A48830", VA = "0x4A48830")]
	public static fsMetaType Get(fsConfig config, Type type)
	{
		return null;
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x4A535D0", Offset = "0x4A535D0", VA = "0x4A535D0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x4A52C10", Offset = "0x4A52C10", VA = "0x4A52C10")]
	private static void CollectProperties(fsConfig config, List<fsMetaProperty> properties, Type reflectedType)
	{
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x4A53C90", Offset = "0x4A53C90", VA = "0x4A53C90")]
	private static bool IsAutoProperty(PropertyInfo property, MemberInfo[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x4A53760", Offset = "0x4A53760", VA = "0x4A53760")]
	private static bool CanSerializeProperty(fsConfig config, PropertyInfo property, MemberInfo[] members, bool annotationFreeValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x4A53A80", Offset = "0x4A53A80", VA = "0x4A53A80")]
	private static bool CanSerializeField(fsConfig config, FieldInfo field, bool annotationFreeValue)
	{
		return default(bool);
	}
}
