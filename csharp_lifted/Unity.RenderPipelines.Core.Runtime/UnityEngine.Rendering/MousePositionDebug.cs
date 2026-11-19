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
		[Address(RVA = "0x64D85C0", Offset = "0x64D75C0", VA = "0x64D85C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x64D8660", Offset = "0x64D7660", VA = "0x64D8660")]
	public void Build()
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x64D8670", Offset = "0x64D7670", VA = "0x64D8670")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x64D8680", Offset = "0x64D7680", VA = "0x64D8680")]
	public Vector2 GetMousePosition(float ScreenHeight, bool sceneView)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x64D8690", Offset = "0x64D7690", VA = "0x64D8690")]
	private Vector2 GetInputMousePosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x64D86A0", Offset = "0x64D76A0", VA = "0x64D86A0")]
	public Vector2 GetMouseClickPosition(float ScreenHeight)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x64D8650", Offset = "0x64D7650", VA = "0x64D8650")]
	public MousePositionDebug()
	{
	}
}
