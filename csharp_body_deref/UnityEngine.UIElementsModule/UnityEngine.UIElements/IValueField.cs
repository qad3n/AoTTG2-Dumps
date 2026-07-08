using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000114")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public interface IValueField<T>
{
	[Token(Token = "0x1700014D")]
	T value
	{
		[Token(Token = "0x6000756")]
		get;
		[Token(Token = "0x6000757")]
		set;
	}

	[Token(Token = "0x6000758")]
	void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, T startValue);

	[Token(Token = "0x6000759")]
	void StartDragging();

	[Token(Token = "0x600075A")]
	void StopDragging();
}
