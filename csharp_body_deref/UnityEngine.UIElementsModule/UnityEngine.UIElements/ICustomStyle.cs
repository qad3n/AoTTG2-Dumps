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
