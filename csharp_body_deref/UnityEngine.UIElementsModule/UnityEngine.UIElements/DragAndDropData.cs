using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200014A")]
internal abstract class DragAndDropData
{
	[Token(Token = "0x1700019E")]
	public abstract object source
	{
		[Token(Token = "0x6000948")]
		get;
	}

	[Token(Token = "0x6000947")]
	public abstract object GetGenericData(string key);

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4CF4B30", Offset = "0x4CF4B30", VA = "0x4CF4B30")]
	protected DragAndDropData()
	{
	}
}
