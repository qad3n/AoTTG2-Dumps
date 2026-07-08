using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FB")]
public interface IDebugDisplaySettingsQuery
{
	[Token(Token = "0x170000C6")]
	bool AreAnySettingsActive
	{
		[Token(Token = "0x600082F")]
		get;
	}

	[Token(Token = "0x170000C7")]
	bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x48882E0", Offset = "0x48882E0", VA = "0x48882E0", Slot = "1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	bool IsLightingActive
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x48882F0", Offset = "0x48882F0", VA = "0x48882F0", Slot = "2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x4888300", Offset = "0x4888300", VA = "0x4888300", Slot = "3")]
	bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}
}
