using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A0")]
public sealed class AottgChoiceOptionCancel : MonoBehaviour, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _control;

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3A216E0", Offset = "0x3A216E0", VA = "0x3A216E0")]
	public void Setup(AottgChoiceControl control)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3A216F0", Offset = "0x3A216F0", VA = "0x3A216F0", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x3A21790", Offset = "0x3A21790", VA = "0x3A21790")]
	public AottgChoiceOptionCancel()
	{
	}
}
