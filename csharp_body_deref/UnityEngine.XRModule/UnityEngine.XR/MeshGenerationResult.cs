// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.MeshGenerationResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001C")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct MeshGenerationResult : IEquatable<MeshGenerationResult>
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ulong _003CTimestamp_003Ek__BackingField;

	[Token(Token = "0x17000016")]
	public readonly MeshId MeshId
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[CompilerGenerated]
		get
		{
			return default(MeshId);
		}
	}

	[Token(Token = "0x17000017")]
	public readonly Mesh Mesh
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public readonly MeshCollider MeshCollider
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public readonly MeshGenerationStatus Status
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(MeshGenerationStatus);
		}
	}

	[Token(Token = "0x1700001A")]
	public readonly MeshVertexAttributes Attributes
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(MeshVertexAttributes);
		}
	}

	[Token(Token = "0x1700001B")]
	public readonly Vector3 Position
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x2AC3A10", Offset = "0x2AC2010", VA = "0x182AC3A10")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001C")]
	public readonly Quaternion Rotation
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x20CA6D0", Offset = "0x20C8CD0", VA = "0x1820CA6D0")]
		[CompilerGenerated]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x1700001D")]
	public readonly Vector3 Scale
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x3313BD0", Offset = "0x33121D0", VA = "0x183313BD0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x33136A0", Offset = "0x3311CA0", VA = "0x1833136A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3313780", Offset = "0x3311D80", VA = "0x183313780", Slot = "4")]
	public bool Equals(MeshGenerationResult other)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3313960", Offset = "0x3311F60", VA = "0x183313960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
