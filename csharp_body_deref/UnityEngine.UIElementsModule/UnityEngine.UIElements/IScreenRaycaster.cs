// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IScreenRaycaster
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200027C")]
internal interface IScreenRaycaster
{
	[Token(Token = "0x60010EB")]
	void Update();

	[Token(Token = "0x60010EC")]
	IEnumerable<(Ray, Camera, bool)> MakeRay(Vector2 mousePosition, int pointerId, int? targetDisplay);
}
