// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderTargetHandle
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x667C270", Offset = "0x667B270", VA = "0x667C270")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x667C260", Offset = "0x667B260", VA = "0x667C260")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000211")]
	private RenderTargetIdentifier rtid
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x667C2A0", Offset = "0x667B2A0", VA = "0x667C2A0")]
		[CompilerGenerated]
		readonly get
		{
			return default(RenderTargetIdentifier);
		}
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x667C280", Offset = "0x667B280", VA = "0x667C280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x667C2C0", Offset = "0x667B2C0", VA = "0x667C2C0")]
	public RenderTargetHandle(RenderTargetIdentifier renderTargetIdentifier)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x667C330", Offset = "0x667B330", VA = "0x667C330")]
	public RenderTargetHandle(RTHandle rtHandle)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x667C5C0", Offset = "0x667B5C0", VA = "0x667C5C0")]
	internal static RenderTargetHandle GetCameraTarget(ref CameraData cameraData)
	{
		return default(RenderTargetHandle);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x667C6F0", Offset = "0x667B6F0", VA = "0x667C6F0")]
	public void Init(string shaderProperty)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x667C750", Offset = "0x667B750", VA = "0x667C750")]
	public void Init(RenderTargetIdentifier renderTargetIdentifier)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x667C7C0", Offset = "0x667B7C0", VA = "0x667C7C0")]
	public RenderTargetIdentifier Identifier()
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x667C920", Offset = "0x667B920", VA = "0x667C920")]
	public bool HasInternalRenderTargetId()
	{
		return default(bool);
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x667C980", Offset = "0x667B980", VA = "0x667C980")]
	public bool Equals(RenderTargetHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x667CAF0", Offset = "0x667BAF0", VA = "0x667CAF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x667CBA0", Offset = "0x667BBA0", VA = "0x667CBA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x667CC00", Offset = "0x667BC00", VA = "0x667CC00")]
	public static bool operator ==(RenderTargetHandle c1, RenderTargetHandle c2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x667CC80", Offset = "0x667BC80", VA = "0x667CC80")]
	public static bool operator !=(RenderTargetHandle c1, RenderTargetHandle c2)
	{
		return default(bool);
	}
}
