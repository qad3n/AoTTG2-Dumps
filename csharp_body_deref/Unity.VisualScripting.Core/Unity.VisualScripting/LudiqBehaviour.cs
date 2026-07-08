using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000195")]
public abstract class LudiqBehaviour : MonoBehaviour, ISerializationCallbackReceiver
{
	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[DoNotSerialize]
	protected SerializationData _data;

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x4A37970", Offset = "0x4A37970", VA = "0x4A37970", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x4A37C90", Offset = "0x4A37C90", VA = "0x4A37C90", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x4A37FB0", Offset = "0x4A37FB0", VA = "0x4A37FB0", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x4A37FC0", Offset = "0x4A37FC0", VA = "0x4A37FC0", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x4A37FD0", Offset = "0x4A37FD0", VA = "0x4A37FD0", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x4A37FE0", Offset = "0x4A37FE0", VA = "0x4A37FE0", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x4A37FF0", Offset = "0x4A37FF0", VA = "0x4A37FF0", Slot = "10")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x4A38020", Offset = "0x4A38020", VA = "0x4A38020", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x4A38030", Offset = "0x4A38030", VA = "0x4A38030")]
	protected LudiqBehaviour()
	{
	}
}
