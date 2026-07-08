using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000005")]
internal static class RemoteConfigSettingsHelper
{
	[Token(Token = "0x2000006")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal enum Tag
	{
		[Token(Token = "0x4000007")]
		kUnknown,
		[Token(Token = "0x4000008")]
		kIntVal,
		[Token(Token = "0x4000009")]
		kInt64Val,
		[Token(Token = "0x400000A")]
		kUInt64Val,
		[Token(Token = "0x400000B")]
		kDoubleVal,
		[Token(Token = "0x400000C")]
		kBoolVal,
		[Token(Token = "0x400000D")]
		kStringVal,
		[Token(Token = "0x400000E")]
		kArrayVal,
		[Token(Token = "0x400000F")]
		kMixedArrayVal,
		[Token(Token = "0x4000010")]
		kMapVal,
		[Token(Token = "0x4000011")]
		kMaxTags
	}
}
