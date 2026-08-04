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
[Token(Token = "0x20001DE")]
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

	[Token(Token = "0x17000244")]
	public Object unityObjectArgument
	{
		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x4E11260", Offset = "0x4E11260", VA = "0x4E11260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000245")]
	public string unityObjectArgumentAssemblyTypeName
	{
		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x4E11270", Offset = "0x4E11270", VA = "0x4E11270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	public int intArgument
	{
		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x4E11280", Offset = "0x4E11280", VA = "0x4E11280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000247")]
	public float floatArgument
	{
		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x4E11290", Offset = "0x4E11290", VA = "0x4E11290")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000248")]
	public string stringArgument
	{
		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x4E112A0", Offset = "0x4E112A0", VA = "0x4E112A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000249")]
	public bool boolArgument
	{
		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x4E112B0", Offset = "0x4E112B0", VA = "0x4E112B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4E112C0", Offset = "0x4E112C0", VA = "0x4E112C0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4E112E0", Offset = "0x4E112E0", VA = "0x4E112E0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4E11300", Offset = "0x4E11300", VA = "0x4E11300")]
	public ArgumentCache()
	{
	}
}
