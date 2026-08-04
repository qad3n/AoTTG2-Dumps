// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ICustomStyle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000276")]
public interface ICustomStyle
{
	[Token(Token = "0x60010AC")]
	bool TryGetValue(CustomStyleProperty<float> property, out float value);

	[Token(Token = "0x60010AD")]
	bool TryGetValue(CustomStyleProperty<int> property, out int value);

	[Token(Token = "0x60010AE")]
	bool TryGetValue(CustomStyleProperty<Color> property, out Color value);

	[Token(Token = "0x60010AF")]
	bool TryGetValue(CustomStyleProperty<Texture2D> property, out Texture2D value);

	[Token(Token = "0x60010B0")]
	bool TryGetValue(CustomStyleProperty<Sprite> property, out Sprite value);

	[Token(Token = "0x60010B1")]
	bool TryGetValue(CustomStyleProperty<VectorImage> property, out VectorImage value);

	[Token(Token = "0x60010B2")]
	bool TryGetValue(CustomStyleProperty<string> property, out string value);
}
