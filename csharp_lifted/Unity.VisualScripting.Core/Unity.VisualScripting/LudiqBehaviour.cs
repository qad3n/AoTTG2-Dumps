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
	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[DoNotSerialize]
	protected SerializationData _data;

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x6846BE0", Offset = "0x6845BE0", VA = "0x6846BE0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x6846EF0", Offset = "0x6845EF0", VA = "0x6846EF0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x6847230", Offset = "0x6846230", VA = "0x6847230", Slot = "6")]
	protected virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x6847240", Offset = "0x6846240", VA = "0x6847240", Slot = "7")]
	protected virtual void OnAfterSerialize()
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x6847250", Offset = "0x6846250", VA = "0x6847250", Slot = "8")]
	protected virtual void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x6847260", Offset = "0x6846260", VA = "0x6847260", Slot = "9")]
	protected virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x6847270", Offset = "0x6846270", VA = "0x6847270", Slot = "10")]
	protected virtual void ShowData()
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x6847320", Offset = "0x6846320", VA = "0x6847320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x6847330", Offset = "0x6846330", VA = "0x6847330")]
	protected LudiqBehaviour()
	{
	}
}
