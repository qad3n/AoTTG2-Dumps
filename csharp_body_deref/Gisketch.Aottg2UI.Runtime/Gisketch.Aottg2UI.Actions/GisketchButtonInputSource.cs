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

[Token(Token = "0x20000D7")]
internal sealed class GisketchButtonInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x170000A8")]
	public GisketchActionInputSource Source
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x529E6F0", Offset = "0x529D6F0", VA = "0x529E6F0")]
		[CompilerGenerated]
		get
		{
			return default(GisketchActionInputSource);
		}
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x529E700", Offset = "0x529D700", VA = "0x529E700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x529E710", Offset = "0x529D710", VA = "0x529E710", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x529E7C0", Offset = "0x529D7C0", VA = "0x529E7C0", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x529E870", Offset = "0x529D870", VA = "0x529E870")]
	public GisketchButtonInputSource()
	{
	}
}
