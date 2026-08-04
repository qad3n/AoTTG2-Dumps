// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ReflectionMethodsCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200007A")]
internal class ReflectionMethodsCache
{
	[Token(Token = "0x200007B")]
	public delegate bool Raycast3DCallback(Ray r, out RaycastHit hit, float f, int i);

	[Token(Token = "0x200007C")]
	public delegate RaycastHit[] RaycastAllCallback(Ray r, float f, int i);

	[Token(Token = "0x200007D")]
	public delegate int GetRaycastNonAllocCallback(Ray r, RaycastHit[] results, float f, int i);

	[Token(Token = "0x200007E")]
	public delegate RaycastHit2D Raycast2DCallback(Vector2 p1, Vector2 p2, float f, int i);

	[Token(Token = "0x200007F")]
	public delegate RaycastHit2D[] GetRayIntersectionAllCallback(Ray r, float f, int i);

	[Token(Token = "0x2000080")]
	public delegate int GetRayIntersectionAllNonAllocCallback(Ray r, RaycastHit2D[] results, float f, int i);

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x10")]
	public Raycast3DCallback raycast3D;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x18")]
	public RaycastAllCallback raycast3DAll;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x20")]
	public GetRaycastNonAllocCallback getRaycastNonAlloc;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x28")]
	public Raycast2DCallback raycast2D;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x30")]
	public GetRayIntersectionAllCallback getRayIntersectionAll;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x38")]
	public GetRayIntersectionAllNonAllocCallback getRayIntersectionAllNonAlloc;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x0")]
	private static ReflectionMethodsCache s_ReflectionMethodsCache;

	[Token(Token = "0x17000151")]
	public static ReflectionMethodsCache Singleton
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x50ED910", Offset = "0x50ED910", VA = "0x50ED910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x50ECB30", Offset = "0x50ECB30", VA = "0x50ECB30")]
	public ReflectionMethodsCache()
	{
	}
}
