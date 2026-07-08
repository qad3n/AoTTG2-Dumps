using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x20001DB")]
internal class ArgumentCache : ISerializationCallbackReceiver
{
	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("objectArgument")]
	private Object m_ObjectArgument;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("objectArgumentAssemblyTypeName")]
	private string m_ObjectArgumentAssemblyTypeName;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("intArgument")]
	private int m_IntArgument;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[FormerlySerializedAs("floatArgument")]
	private float m_FloatArgument;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("stringArgument")]
	private string m_StringArgument;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_BoolArgument;

	[Token(Token = "0x17000243")]
	public Object unityObjectArgument
	{
		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x4AE9930", Offset = "0x4AE9930", VA = "0x4AE9930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000244")]
	public string unityObjectArgumentAssemblyTypeName
	{
		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x4AE9940", Offset = "0x4AE9940", VA = "0x4AE9940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000245")]
	public int intArgument
	{
		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x4AE9950", Offset = "0x4AE9950", VA = "0x4AE9950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000246")]
	public float floatArgument
	{
		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x4AE9960", Offset = "0x4AE9960", VA = "0x4AE9960")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000247")]
	public string stringArgument
	{
		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x4AE9970", Offset = "0x4AE9970", VA = "0x4AE9970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public bool boolArgument
	{
		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x4AE9980", Offset = "0x4AE9980", VA = "0x4AE9980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x4AE9990", Offset = "0x4AE9990", VA = "0x4AE9990", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4AE99B0", Offset = "0x4AE99B0", VA = "0x4AE99B0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4AE99D0", Offset = "0x4AE99D0", VA = "0x4AE99D0")]
	public ArgumentCache()
	{
	}
}
