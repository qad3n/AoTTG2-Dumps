using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FE")]
public class MousePositionDebug
{
	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x0")]
	private static MousePositionDebug s_Instance;

	[Token(Token = "0x170000D3")]
	public static MousePositionDebug instance
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x4888310", Offset = "0x4888310", VA = "0x4888310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x48883B0", Offset = "0x48883B0", VA = "0x48883B0")]
	public void Build()
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x48883C0", Offset = "0x48883C0", VA = "0x48883C0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x48883D0", Offset = "0x48883D0", VA = "0x48883D0")]
	public Vector2 GetMousePosition(float ScreenHeight, bool sceneView)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x48883E0", Offset = "0x48883E0", VA = "0x48883E0")]
	private Vector2 GetInputMousePosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x48883F0", Offset = "0x48883F0", VA = "0x48883F0")]
	public Vector2 GetMouseClickPosition(float ScreenHeight)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x48883A0", Offset = "0x48883A0", VA = "0x48883A0")]
	public MousePositionDebug()
	{
	}
}
