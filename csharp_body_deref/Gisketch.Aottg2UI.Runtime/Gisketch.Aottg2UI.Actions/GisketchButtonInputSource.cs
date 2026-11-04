// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D1")]
internal sealed class GisketchButtonInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x170000A8")]
	public GisketchActionInputSource Source
	{
		[Token(Token = "0x600066B")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(GisketchActionInputSource);
		}
		[Token(Token = "0x600066C")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x18FCDA0", Offset = "0x18FB3A0", VA = "0x1818FCDA0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x18FCDB0", Offset = "0x18FB3B0", VA = "0x1818FCDB0", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchButtonInputSource()
	{
	}
}
