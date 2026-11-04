// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderTargetHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200016C")]
[Obsolete("Deprecated in favor of RTHandle. #from(2022.1) #breakingFrom(2023.1)", true)]
public struct RenderTargetHandle
{
	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RenderTargetHandle CameraTarget;

	[Token(Token = "0x17000210")]
	public int id
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000211")]
	private RenderTargetIdentifier rtid
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0xADC640", Offset = "0xADAC40", VA = "0x180ADC640")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x2C78980", Offset = "0x2C76F80", VA = "0x182C78980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x2C78570", Offset = "0x2C76B70", VA = "0x182C78570")]
	public RenderTargetHandle(RenderTargetIdentifier renderTargetIdentifier)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x2C785E0", Offset = "0x2C76BE0", VA = "0x182C785E0")]
	public RenderTargetHandle(RTHandle rtHandle)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x2C78110", Offset = "0x2C76710", VA = "0x182C78110")]
	internal static RenderTargetHandle GetCameraTarget(ref CameraData cameraData)
	{
		return default(RenderTargetHandle);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x2C784B0", Offset = "0x2C76AB0", VA = "0x182C784B0")]
	public void Init(string shaderProperty)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x2C78440", Offset = "0x2C76A40", VA = "0x182C78440")]
	public void Init(RenderTargetIdentifier renderTargetIdentifier)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x2C782F0", Offset = "0x2C768F0", VA = "0x182C782F0")]
	public RenderTargetIdentifier Identifier()
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x2C782A0", Offset = "0x2C768A0", VA = "0x182C782A0")]
	public bool HasInternalRenderTargetId()
	{
		return default(bool);
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x2C77EA0", Offset = "0x2C764A0", VA = "0x182C77EA0")]
	public bool Equals(RenderTargetHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x2C78050", Offset = "0x2C76650", VA = "0x182C78050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x2C78250", Offset = "0x2C76850", VA = "0x182C78250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x2C78880", Offset = "0x2C76E80", VA = "0x182C78880")]
	public static bool operator ==(RenderTargetHandle c1, RenderTargetHandle c2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x2C78900", Offset = "0x2C76F00", VA = "0x182C78900")]
	public static bool operator !=(RenderTargetHandle c1, RenderTargetHandle c2)
	{
		return default(bool);
	}
}
