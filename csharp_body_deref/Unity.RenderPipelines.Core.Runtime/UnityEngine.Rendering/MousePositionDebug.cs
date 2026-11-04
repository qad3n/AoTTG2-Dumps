// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MousePositionDebug
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D4")]
public class MousePositionDebug
{
	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x0")]
	private static MousePositionDebug s_Instance;

	[Token(Token = "0x170000BC")]
	public static MousePositionDebug instance
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x2AE3700", Offset = "0x2AE1D00", VA = "0x182AE3700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Build()
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x2AE36D0", Offset = "0x2AE1CD0", VA = "0x182AE36D0")]
	public Vector2 GetMousePosition(float ScreenHeight, bool sceneView)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x2AE36D0", Offset = "0x2AE1CD0", VA = "0x182AE36D0")]
	private Vector2 GetInputMousePosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0xA3A940", Offset = "0xA38F40", VA = "0x180A3A940")]
	public Vector2 GetMouseClickPosition(float ScreenHeight)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MousePositionDebug()
	{
	}
}
