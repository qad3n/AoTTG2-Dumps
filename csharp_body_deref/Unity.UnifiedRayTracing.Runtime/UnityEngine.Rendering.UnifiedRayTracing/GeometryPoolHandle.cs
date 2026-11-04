// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200002B")]
internal struct GeometryPoolHandle : IEquatable<GeometryPoolHandle>
{
	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GeometryPoolHandle Invalid;

	[Token(Token = "0x17000009")]
	public readonly bool valid
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2D83D00", Offset = "0x2D82300", VA = "0x182D83D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1B28F40", Offset = "0x1B27540", VA = "0x181B28F40", Slot = "4")]
	public bool Equals(GeometryPoolHandle other)
	{
		return default(bool);
	}
}
