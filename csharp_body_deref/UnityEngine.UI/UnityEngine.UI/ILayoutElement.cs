// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ILayoutElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000046")]
public interface ILayoutElement
{
	[Token(Token = "0x170000B7")]
	float minWidth
	{
		[Token(Token = "0x60002BA")]
		get;
	}

	[Token(Token = "0x170000B8")]
	float preferredWidth
	{
		[Token(Token = "0x60002BB")]
		get;
	}

	[Token(Token = "0x170000B9")]
	float flexibleWidth
	{
		[Token(Token = "0x60002BC")]
		get;
	}

	[Token(Token = "0x170000BA")]
	float minHeight
	{
		[Token(Token = "0x60002BD")]
		get;
	}

	[Token(Token = "0x170000BB")]
	float preferredHeight
	{
		[Token(Token = "0x60002BE")]
		get;
	}

	[Token(Token = "0x170000BC")]
	float flexibleHeight
	{
		[Token(Token = "0x60002BF")]
		get;
	}

	[Token(Token = "0x170000BD")]
	int layoutPriority
	{
		[Token(Token = "0x60002C0")]
		get;
	}

	[Token(Token = "0x60002B8")]
	void CalculateLayoutInputHorizontal();

	[Token(Token = "0x60002B9")]
	void CalculateLayoutInputVertical();
}
