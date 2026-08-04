// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Member
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000EE")]
[SerializationVersion("A", new Type[] { })]
public sealed class Member : ISerializationCallbackReceiver
{
	[Token(Token = "0x20000EF")]
	public enum Source
	{
		[Token(Token = "0x4000193")]
		Unknown,
		[Token(Token = "0x4000194")]
		Field,
		[Token(Token = "0x4000195")]
		Property,
		[Token(Token = "0x4000196")]
		Method,
		[Token(Token = "0x4000197")]
		Constructor
	}

	[Token(Token = "0x4000180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeAs("name")]
	private string _name;

	[Token(Token = "0x4000181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeAs("parameterTypes")]
	private Type[] _parameterTypes;

	[Token(Token = "0x4000182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeAs("targetType")]
	private Type _targetType;

	[Token(Token = "0x4000183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeAs("targetTypeName")]
	private string _targetTypeName;

	[Token(Token = "0x4000184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[DoNotSerialize]
	private Source _source;

	[Token(Token = "0x4000185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[DoNotSerialize]
	private FieldInfo _fieldInfo;

	[Token(Token = "0x4000186")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[DoNotSerialize]
	private PropertyInfo _propertyInfo;

	[Token(Token = "0x4000187")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[DoNotSerialize]
	private MethodInfo _methodInfo;

	[Token(Token = "0x4000188")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[DoNotSerialize]
	private ConstructorInfo _constructorInfo;

	[Token(Token = "0x4000189")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[DoNotSerialize]
	private bool _isExtension;

	[Token(Token = "0x400018A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[DoNotSerialize]
	private bool _isInvokedAsExtension;

	[Token(Token = "0x400018B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[DoNotSerialize]
	private IOptimizedAccessor fieldAccessor;

	[Token(Token = "0x400018C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[DoNotSerialize]
	private IOptimizedAccessor propertyAccessor;

	[Token(Token = "0x400018D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[DoNotSerialize]
	private IOptimizedInvoker methodInvoker;

	[Token(Token = "0x400018F")]
	public const MemberTypes SupportedMemberTypes = MemberTypes.Constructor | MemberTypes.Field | MemberTypes.Method | MemberTypes.Property;

	[Token(Token = "0x4000190")]
	public const BindingFlags SupportedBindingFlags = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy;

	[Token(Token = "0x4000191")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object[] EmptyObjects;

	[Token(Token = "0x1700011D")]
	[DoNotSerialize]
	public Type targetType
	{
		[Token(Token = "0x60005AF")]
		[Address(RVA = "0x4CC32E0", Offset = "0x4CC32E0", VA = "0x4CC32E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B0")]
		[Address(RVA = "0x4CC2530", Offset = "0x4CC2530", VA = "0x4CC2530")]
		private set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	[DoNotSerialize]
	public string targetTypeName
	{
		[Token(Token = "0x60005B1")]
		[Address(RVA = "0x4CC32F0", Offset = "0x4CC32F0", VA = "0x4CC32F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	[DoNotSerialize]
	public string name
	{
		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x4CC3300", Offset = "0x4CC3300", VA = "0x4CC3300")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x4CC2630", Offset = "0x4CC2630", VA = "0x4CC2630")]
		private set
		{
		}
	}

	[Token(Token = "0x17000120")]
	[DoNotSerialize]
	public bool isReflected
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x4CC3310", Offset = "0x4CC3310", VA = "0x4CC3310")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x4CC3320", Offset = "0x4CC3320", VA = "0x4CC3320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000121")]
	[DoNotSerialize]
	public Source source
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x4CC3330", Offset = "0x4CC3330", VA = "0x4CC3330")]
		get
		{
			return default(Source);
		}
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x4CC3360", Offset = "0x4CC3360", VA = "0x4CC3360")]
		private set
		{
		}
	}

	[Token(Token = "0x17000122")]
	[DoNotSerialize]
	public FieldInfo fieldInfo
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x4CC3370", Offset = "0x4CC3370", VA = "0x4CC3370")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x4CC3390", Offset = "0x4CC3390", VA = "0x4CC3390")]
		private set
		{
		}
	}

	[Token(Token = "0x17000123")]
	[DoNotSerialize]
	public PropertyInfo propertyInfo
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x4CC33A0", Offset = "0x4CC33A0", VA = "0x4CC33A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x4CC33C0", Offset = "0x4CC33C0", VA = "0x4CC33C0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000124")]
	[DoNotSerialize]
	public MethodInfo methodInfo
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x4CC33D0", Offset = "0x4CC33D0", VA = "0x4CC33D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x4CC33F0", Offset = "0x4CC33F0", VA = "0x4CC33F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000125")]
	[DoNotSerialize]
	public ConstructorInfo constructorInfo
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x4CC3400", Offset = "0x4CC3400", VA = "0x4CC3400")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x4CC3420", Offset = "0x4CC3420", VA = "0x4CC3420")]
		private set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[DoNotSerialize]
	public bool isExtension
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x4CC3430", Offset = "0x4CC3430", VA = "0x4CC3430")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x4CC3450", Offset = "0x4CC3450", VA = "0x4CC3450")]
		private set
		{
		}
	}

	[Token(Token = "0x17000127")]
	[DoNotSerialize]
	public bool isInvokedAsExtension
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x4CC3460", Offset = "0x4CC3460", VA = "0x4CC3460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x4CC3480", Offset = "0x4CC3480", VA = "0x4CC3480")]
		private set
		{
		}
	}

	[Token(Token = "0x17000128")]
	[DoNotSerialize]
	public Type[] parameterTypes
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x4CC3490", Offset = "0x4CC3490", VA = "0x4CC3490")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x4CC2670", Offset = "0x4CC2670", VA = "0x4CC2670")]
		private set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public MethodBase methodBase
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x4CC34A0", Offset = "0x4CC34A0", VA = "0x4CC34A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	private MemberInfo _info
	{
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x4CC3500", Offset = "0x4CC3500", VA = "0x4CC3500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public MemberInfo info
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x4CC35A0", Offset = "0x4CC35A0", VA = "0x4CC35A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012C")]
	public Type type
	{
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x4CC3690", Offset = "0x4CC3690", VA = "0x4CC3690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public bool isCoroutine
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x4CC37F0", Offset = "0x4CC37F0", VA = "0x4CC37F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012E")]
	public bool isYieldInstruction
	{
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x4CC3890", Offset = "0x4CC3890", VA = "0x4CC3890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012F")]
	public bool isGettable
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x4CC3880", Offset = "0x4CC3880", VA = "0x4CC3880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000130")]
	public bool isPubliclyGettable
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x4CC3B60", Offset = "0x4CC3B60", VA = "0x4CC3B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public bool isSettable
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x4CC3B70", Offset = "0x4CC3B70", VA = "0x4CC3B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	public bool isPubliclySettable
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x4CC3D20", Offset = "0x4CC3D20", VA = "0x4CC3D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public bool isInvocable
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x4CC3D30", Offset = "0x4CC3D30", VA = "0x4CC3D30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public bool isPubliclyInvocable
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x4CC3E30", Offset = "0x4CC3E30", VA = "0x4CC3E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000135")]
	public bool isAccessor
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x4CC3E40", Offset = "0x4CC3E40", VA = "0x4CC3E40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public bool isField
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x4CC3EC0", Offset = "0x4CC3EC0", VA = "0x4CC3EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool isProperty
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x4CC3EF0", Offset = "0x4CC3EF0", VA = "0x4CC3EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public bool isMethod
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4CC3F20", Offset = "0x4CC3F20", VA = "0x4CC3F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public bool isConstructor
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x4CC3F50", Offset = "0x4CC3F50", VA = "0x4CC3F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool requiresTarget
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x4CC3F80", Offset = "0x4CC3F80", VA = "0x4CC3F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public bool isOperator
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4CC4100", Offset = "0x4CC4100", VA = "0x4CC4100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public bool isConversion
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x4CC4190", Offset = "0x4CC4190", VA = "0x4CC4190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public int order
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x4CC4220", Offset = "0x4CC4220", VA = "0x4CC4220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013E")]
	public Type declaringType
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x4CC4250", Offset = "0x4CC4250", VA = "0x4CC4250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public bool isInherited
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x4CC42C0", Offset = "0x4CC42C0", VA = "0x4CC42C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public Type pseudoDeclaringType
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4CC4360", Offset = "0x4CC4360", VA = "0x4CC4360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public bool isPseudoInherited
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x4CC46C0", Offset = "0x4CC46C0", VA = "0x4CC46C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000142")]
	public bool isIndexer
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x4CC4780", Offset = "0x4CC4780", VA = "0x4CC4780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000143")]
	public bool isPredictable
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x4CC47E0", Offset = "0x4CC47E0", VA = "0x4CC47E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000144")]
	public bool allowsNull
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x4CC4870", Offset = "0x4CC4870", VA = "0x4CC4870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4CC21F0", Offset = "0x4CC21F0", VA = "0x4CC21F0")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public Member()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4CC2200", Offset = "0x4CC2200", VA = "0x4CC2200")]
	public Member(Type targetType, string name, [Optional] Type[] parameterTypes)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4CC2690", Offset = "0x4CC2690", VA = "0x4CC2690")]
	public Member(Type targetType, FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4CC2900", Offset = "0x4CC2900", VA = "0x4CC2900")]
	public Member(Type targetType, PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4CC2B70", Offset = "0x4CC2B70", VA = "0x4CC2B70")]
	public Member(Type targetType, MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4CC2F50", Offset = "0x4CC2F50", VA = "0x4CC2F50")]
	public Member(Type targetType, ConstructorInfo constructorInfo)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4CC4990", Offset = "0x4CC4990", VA = "0x4CC4990", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4CC49A0", Offset = "0x4CC49A0", VA = "0x4CC49A0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4CC3940", Offset = "0x4CC3940", VA = "0x4CC3940")]
	public bool IsGettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4CC3B80", Offset = "0x4CC3B80", VA = "0x4CC3B80")]
	public bool IsSettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4CC3D40", Offset = "0x4CC3D40", VA = "0x4CC3D40")]
	public bool IsInvocable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4CC4B00", Offset = "0x4CC4B00", VA = "0x4CC4B00")]
	private void EnsureExplicitParameterTypes()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4CC4B60", Offset = "0x4CC4B60", VA = "0x4CC4B60")]
	public void Reflect()
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4CC5680", Offset = "0x4CC5680", VA = "0x4CC5680")]
	private void ReflectField(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4CC5850", Offset = "0x4CC5850", VA = "0x4CC5850")]
	private void ReflectProperty(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4CC5E30", Offset = "0x4CC5E30", VA = "0x4CC5E30")]
	private void ReflectConstructor(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4CC5A20", Offset = "0x4CC5A20", VA = "0x4CC5A20")]
	private void ReflectMethod(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4CC6290", Offset = "0x4CC6290", VA = "0x4CC6290")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4CC3350", Offset = "0x4CC3350", VA = "0x4CC3350")]
	public void EnsureReflected()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4CC6410", Offset = "0x4CC6410", VA = "0x4CC6410")]
	public void EnsureReady(object target)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4CC64D0", Offset = "0x4CC64D0", VA = "0x4CC64D0")]
	public object Get(object target)
	{
		return null;
	}

	[Token(Token = "0x60005F1")]
	public T Get<T>(object target)
	{
		return (T)null;
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4CC6770", Offset = "0x4CC6770", VA = "0x4CC6770")]
	public object Set(object target, object value)
	{
		return null;
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4CC6A10", Offset = "0x4CC6A10", VA = "0x4CC6A10")]
	private void EnsureInvocable(object target)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4CC6C60", Offset = "0x4CC6C60", VA = "0x4CC6C60")]
	public IEnumerable<ParameterInfo> GetParameterInfos()
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4CC6D40", Offset = "0x4CC6D40", VA = "0x4CC6D40")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4CC6F00", Offset = "0x4CC6F00", VA = "0x4CC6F00")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4CC7130", Offset = "0x4CC7130", VA = "0x4CC7130")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4CC73A0", Offset = "0x4CC73A0", VA = "0x4CC73A0")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4CC7660", Offset = "0x4CC7660", VA = "0x4CC7660")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4CC7980", Offset = "0x4CC7980", VA = "0x4CC7980")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4CC7EA0", Offset = "0x4CC7EA0", VA = "0x4CC7EA0")]
	public object Invoke(object target, params object[] arguments)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	public T Invoke<T>(object target)
	{
		return (T)null;
	}

	[Token(Token = "0x60005FD")]
	public T Invoke<T>(object target, object arg0)
	{
		return (T)null;
	}

	[Token(Token = "0x60005FE")]
	public T Invoke<T>(object target, object arg0, object arg1)
	{
		return (T)null;
	}

	[Token(Token = "0x60005FF")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2)
	{
		return (T)null;
	}

	[Token(Token = "0x6000600")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return (T)null;
	}

	[Token(Token = "0x6000601")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return (T)null;
	}

	[Token(Token = "0x6000602")]
	public T Invoke<T>(object target, params object[] arguments)
	{
		return (T)null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4CC8120", Offset = "0x4CC8120", VA = "0x4CC8120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4CC83B0", Offset = "0x4CC83B0", VA = "0x4CC83B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4CBCEA0", Offset = "0x4CBCEA0", VA = "0x4CBCEA0")]
	public static bool operator ==(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4CC8310", Offset = "0x4CC8310", VA = "0x4CC8310")]
	public static bool operator !=(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4CC84B0", Offset = "0x4CC84B0", VA = "0x4CC84B0")]
	public string ToUniqueString()
	{
		return null;
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4CC85D0", Offset = "0x4CC85D0", VA = "0x4CC85D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4CC8650", Offset = "0x4CC8650", VA = "0x4CC8650")]
	public Member ToDeclarer()
	{
		return null;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4CC8710", Offset = "0x4CC8710", VA = "0x4CC8710")]
	public Member ToPseudoDeclarer()
	{
		return null;
	}
}
