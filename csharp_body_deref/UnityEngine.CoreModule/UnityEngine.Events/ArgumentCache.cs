// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.ArgumentCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x2000220")]
internal class ArgumentCache : ISerializationCallbackReceiver
{
	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("objectArgument")]
	[SerializeField]
	private Object m_ObjectArgument;

	[Token(Token = "0x4000713")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("objectArgumentAssemblyTypeName")]
	private string m_ObjectArgumentAssemblyTypeName;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("intArgument")]
	[SerializeField]
	private int m_IntArgument;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("floatArgument")]
	[SerializeField]
	private float m_FloatArgument;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("stringArgument")]
	[SerializeField]
	private string m_StringArgument;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_BoolArgument;

	[Token(Token = "0x170002CA")]
	public Object unityObjectArgument
	{
		[Token(Token = "0x600110D")]
		[Address(RVA = "0x69330D0", Offset = "0x69320D0", VA = "0x69330D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CB")]
	public string unityObjectArgumentAssemblyTypeName
	{
		[Token(Token = "0x600110E")]
		[Address(RVA = "0x69330E0", Offset = "0x69320E0", VA = "0x69330E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CC")]
	public int intArgument
	{
		[Token(Token = "0x600110F")]
		[Address(RVA = "0x69330F0", Offset = "0x69320F0", VA = "0x69330F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002CD")]
	public float floatArgument
	{
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x6933100", Offset = "0x6932100", VA = "0x6933100")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002CE")]
	public string stringArgument
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x6933110", Offset = "0x6932110", VA = "0x6933110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CF")]
	public bool boolArgument
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x6933120", Offset = "0x6932120", VA = "0x6933120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x6933130", Offset = "0x6932130", VA = "0x6933130", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x6933160", Offset = "0x6932160", VA = "0x6933160", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x6933190", Offset = "0x6932190", VA = "0x6933190")]
	public ArgumentCache()
	{
	}
}
