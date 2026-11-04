// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IPointerOrMouseEvent
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000222")]
internal interface IPointerOrMouseEvent
{
	[Token(Token = "0x170002BD")]
	Vector3 position
	{
		[Token(Token = "0x6000E49")]
		get;
	}

	[Token(Token = "0x170002BE")]
	Vector3 deltaPosition
	{
		[Token(Token = "0x6000E4A")]
		set;
	}

	[Token(Token = "0x170002BF")]
	Ray? panelRay
	{
		[Token(Token = "0x6000E4B")]
		get;
	}
}
