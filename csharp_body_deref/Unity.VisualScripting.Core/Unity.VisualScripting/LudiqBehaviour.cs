// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.LudiqBehaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D5C540", Offset = "0x4D5C540", VA = "0x4D5C540", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x4D5C860", Offset = "0x4D5C860", VA = "0x4D5C860", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x4D5CB80", Offset = "0x4D5CB80", VA = "0x4D5CB80", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x4D5CB90", Offset = "0x4D5CB90", VA = "0x4D5CB90", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x4D5CBA0", Offset = "0x4D5CBA0", VA = "0x4D5CBA0", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x4D5CBB0", Offset = "0x4D5CBB0", VA = "0x4D5CBB0", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x4D5CBC0", Offset = "0x4D5CBC0", VA = "0x4D5CBC0", Slot = "10")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x4D5CBF0", Offset = "0x4D5CBF0", VA = "0x4D5CBF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x4D5CC00", Offset = "0x4D5CC00", VA = "0x4D5CC00")]
	protected LudiqBehaviour()
	{
	}
}
