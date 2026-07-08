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
		[Address(RVA = "0x499E710", Offset = "0x499E710", VA = "0x499E710")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B0")]
		[Address(RVA = "0x499D960", Offset = "0x499D960", VA = "0x499D960")]
		private set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	[DoNotSerialize]
	public string targetTypeName
	{
		[Token(Token = "0x60005B1")]
		[Address(RVA = "0x499E720", Offset = "0x499E720", VA = "0x499E720")]
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
		[Address(RVA = "0x499E730", Offset = "0x499E730", VA = "0x499E730")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x499DA60", Offset = "0x499DA60", VA = "0x499DA60")]
		private set
		{
		}
	}

	[Token(Token = "0x17000120")]
	[DoNotSerialize]
	public bool isReflected
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x499E740", Offset = "0x499E740", VA = "0x499E740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x499E750", Offset = "0x499E750", VA = "0x499E750")]
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
		[Address(RVA = "0x499E760", Offset = "0x499E760", VA = "0x499E760")]
		get
		{
			return default(Source);
		}
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x499E790", Offset = "0x499E790", VA = "0x499E790")]
		private set
		{
		}
	}

	[Token(Token = "0x17000122")]
	[DoNotSerialize]
	public FieldInfo fieldInfo
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x499E7A0", Offset = "0x499E7A0", VA = "0x499E7A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x499E7C0", Offset = "0x499E7C0", VA = "0x499E7C0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000123")]
	[DoNotSerialize]
	public PropertyInfo propertyInfo
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x499E7D0", Offset = "0x499E7D0", VA = "0x499E7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x499E7F0", Offset = "0x499E7F0", VA = "0x499E7F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000124")]
	[DoNotSerialize]
	public MethodInfo methodInfo
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x499E800", Offset = "0x499E800", VA = "0x499E800")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x499E820", Offset = "0x499E820", VA = "0x499E820")]
		private set
		{
		}
	}

	[Token(Token = "0x17000125")]
	[DoNotSerialize]
	public ConstructorInfo constructorInfo
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x499E830", Offset = "0x499E830", VA = "0x499E830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x499E850", Offset = "0x499E850", VA = "0x499E850")]
		private set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[DoNotSerialize]
	public bool isExtension
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x499E860", Offset = "0x499E860", VA = "0x499E860")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x499E880", Offset = "0x499E880", VA = "0x499E880")]
		private set
		{
		}
	}

	[Token(Token = "0x17000127")]
	[DoNotSerialize]
	public bool isInvokedAsExtension
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x499E890", Offset = "0x499E890", VA = "0x499E890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x499E8B0", Offset = "0x499E8B0", VA = "0x499E8B0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000128")]
	[DoNotSerialize]
	public Type[] parameterTypes
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x499E8C0", Offset = "0x499E8C0", VA = "0x499E8C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x499DAA0", Offset = "0x499DAA0", VA = "0x499DAA0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public MethodBase methodBase
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x499E8D0", Offset = "0x499E8D0", VA = "0x499E8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	private MemberInfo _info
	{
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x499E930", Offset = "0x499E930", VA = "0x499E930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public MemberInfo info
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x499E9D0", Offset = "0x499E9D0", VA = "0x499E9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012C")]
	public Type type
	{
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x499EAC0", Offset = "0x499EAC0", VA = "0x499EAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public bool isCoroutine
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x499EC20", Offset = "0x499EC20", VA = "0x499EC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012E")]
	public bool isYieldInstruction
	{
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x499ECC0", Offset = "0x499ECC0", VA = "0x499ECC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012F")]
	public bool isGettable
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x499ECB0", Offset = "0x499ECB0", VA = "0x499ECB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000130")]
	public bool isPubliclyGettable
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x499EF90", Offset = "0x499EF90", VA = "0x499EF90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public bool isSettable
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x499EFA0", Offset = "0x499EFA0", VA = "0x499EFA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	public bool isPubliclySettable
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x499F150", Offset = "0x499F150", VA = "0x499F150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public bool isInvocable
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x499F160", Offset = "0x499F160", VA = "0x499F160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public bool isPubliclyInvocable
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x499F260", Offset = "0x499F260", VA = "0x499F260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000135")]
	public bool isAccessor
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x499F270", Offset = "0x499F270", VA = "0x499F270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public bool isField
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x499F2F0", Offset = "0x499F2F0", VA = "0x499F2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool isProperty
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x499F320", Offset = "0x499F320", VA = "0x499F320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public bool isMethod
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x499F350", Offset = "0x499F350", VA = "0x499F350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public bool isConstructor
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x499F380", Offset = "0x499F380", VA = "0x499F380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool requiresTarget
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x499F3B0", Offset = "0x499F3B0", VA = "0x499F3B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public bool isOperator
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x499F530", Offset = "0x499F530", VA = "0x499F530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public bool isConversion
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x499F5C0", Offset = "0x499F5C0", VA = "0x499F5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public int order
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x499F650", Offset = "0x499F650", VA = "0x499F650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013E")]
	public Type declaringType
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x499F680", Offset = "0x499F680", VA = "0x499F680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public bool isInherited
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x499F6F0", Offset = "0x499F6F0", VA = "0x499F6F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public Type pseudoDeclaringType
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x499F790", Offset = "0x499F790", VA = "0x499F790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public bool isPseudoInherited
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x499FAF0", Offset = "0x499FAF0", VA = "0x499FAF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000142")]
	public bool isIndexer
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x499FBB0", Offset = "0x499FBB0", VA = "0x499FBB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000143")]
	public bool isPredictable
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x499FC10", Offset = "0x499FC10", VA = "0x499FC10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000144")]
	public bool allowsNull
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x499FCA0", Offset = "0x499FCA0", VA = "0x499FCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x499D620", Offset = "0x499D620", VA = "0x499D620")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public Member()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x499D630", Offset = "0x499D630", VA = "0x499D630")]
	public Member(Type targetType, string name, [Optional] Type[] parameterTypes)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x499DAC0", Offset = "0x499DAC0", VA = "0x499DAC0")]
	public Member(Type targetType, FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x499DD30", Offset = "0x499DD30", VA = "0x499DD30")]
	public Member(Type targetType, PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x499DFA0", Offset = "0x499DFA0", VA = "0x499DFA0")]
	public Member(Type targetType, MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x499E380", Offset = "0x499E380", VA = "0x499E380")]
	public Member(Type targetType, ConstructorInfo constructorInfo)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x499FDC0", Offset = "0x499FDC0", VA = "0x499FDC0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x499FDD0", Offset = "0x499FDD0", VA = "0x499FDD0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x499ED70", Offset = "0x499ED70", VA = "0x499ED70")]
	public bool IsGettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x499EFB0", Offset = "0x499EFB0", VA = "0x499EFB0")]
	public bool IsSettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x499F170", Offset = "0x499F170", VA = "0x499F170")]
	public bool IsInvocable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x499FF30", Offset = "0x499FF30", VA = "0x499FF30")]
	private void EnsureExplicitParameterTypes()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x499FF90", Offset = "0x499FF90", VA = "0x499FF90")]
	public void Reflect()
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x49A0AB0", Offset = "0x49A0AB0", VA = "0x49A0AB0")]
	private void ReflectField(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x49A0C80", Offset = "0x49A0C80", VA = "0x49A0C80")]
	private void ReflectProperty(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x49A1260", Offset = "0x49A1260", VA = "0x49A1260")]
	private void ReflectConstructor(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x49A0E50", Offset = "0x49A0E50", VA = "0x49A0E50")]
	private void ReflectMethod(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x49A16C0", Offset = "0x49A16C0", VA = "0x49A16C0")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x499E780", Offset = "0x499E780", VA = "0x499E780")]
	public void EnsureReflected()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x49A1840", Offset = "0x49A1840", VA = "0x49A1840")]
	public void EnsureReady(object target)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x49A1900", Offset = "0x49A1900", VA = "0x49A1900")]
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
	[Address(RVA = "0x49A1BA0", Offset = "0x49A1BA0", VA = "0x49A1BA0")]
	public object Set(object target, object value)
	{
		return null;
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x49A1E40", Offset = "0x49A1E40", VA = "0x49A1E40")]
	private void EnsureInvocable(object target)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x49A2090", Offset = "0x49A2090", VA = "0x49A2090")]
	public IEnumerable<ParameterInfo> GetParameterInfos()
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x49A2170", Offset = "0x49A2170", VA = "0x49A2170")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x49A2330", Offset = "0x49A2330", VA = "0x49A2330")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x49A2560", Offset = "0x49A2560", VA = "0x49A2560")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x49A27D0", Offset = "0x49A27D0", VA = "0x49A27D0")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x49A2A90", Offset = "0x49A2A90", VA = "0x49A2A90")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x49A2DB0", Offset = "0x49A2DB0", VA = "0x49A2DB0")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x49A32D0", Offset = "0x49A32D0", VA = "0x49A32D0")]
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
	[Address(RVA = "0x49A3550", Offset = "0x49A3550", VA = "0x49A3550", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x49A37E0", Offset = "0x49A37E0", VA = "0x49A37E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x49982D0", Offset = "0x49982D0", VA = "0x49982D0")]
	public static bool operator ==(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x49A3740", Offset = "0x49A3740", VA = "0x49A3740")]
	public static bool operator !=(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x49A38E0", Offset = "0x49A38E0", VA = "0x49A38E0")]
	public string ToUniqueString()
	{
		return null;
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x49A3A00", Offset = "0x49A3A00", VA = "0x49A3A00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x49A3A80", Offset = "0x49A3A80", VA = "0x49A3A80")]
	public Member ToDeclarer()
	{
		return null;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x49A3B40", Offset = "0x49A3B40", VA = "0x49A3B40")]
	public Member ToPseudoDeclarer()
	{
		return null;
	}
}
